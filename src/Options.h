//
// Created by Ben Short on 12/19/23.
//
#ifndef OPTIONS_H
#define OPTIONS_H



class Options {
public:
    static double callOptionPrice(double strikePrice, double currentPrice, double monthsToExpiration, double riskFreeRate,
                        double volatility);
};



#endif //OPTIONS_H
