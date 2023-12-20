//
// Created by Ben Short on 12/19/23.
//
#include "Bond.h"
#include <cmath>

double Bond::couponBondPrice(double couponRate, double discountRate,
                       double compoundPeriods, double parValue){
    double bondPrice = 0;
    double p1 = (couponRate * parValue) * ((1 - pow((1 + discountRate), (compoundPeriods * -1))) / discountRate);
    double p2 = parValue / pow((1 + discountRate), compoundPeriods);
    bondPrice = p1 + p2;
    return bondPrice;
}
double Bond::zeroCouponBondPrice(double monthsToMaturity, double parValue, double rateOfReturn) {
    double bondPrice = parValue / pow((1 + rateOfReturn), monthsToMaturity/12);
    return bondPrice;
}