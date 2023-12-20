//
// Created by Ben Short on 12/19/23.
//
#include "Options.h"
#include <cmath>
#ifndef Pi
#define Pi 3.14159265358979323846264
#endif

//treasury - inflation = RFR
//3 month often used

double Options::callOptionPrice(double strikePrice,
    double currentPrice, double monthsToExpiration,
    double riskFreeRate, double stdDev) {
    double timeToExpiration = monthsToExpiration/12;
    double p1 = (1 / stdDev * sqrt(timeToExpiration)) *
        (log(currentPrice/strikePrice) +
            (riskFreeRate + (pow(stdDev,2)/2))
            * timeToExpiration);
    double p2 = p1 - stdDev * sqrt(timeToExpiration);
    double PVK = strikePrice * exp(-1 * riskFreeRate * (timeToExpiration));
    double NCDFp1 = erfc(-p1/sqrt(2))/2;
    double NCDFp2 = erfc(-p2/sqrt(2))/2;
    double optionPrice = NCDFp1*currentPrice - NCDFp2*PVK;
    return optionPrice;
}