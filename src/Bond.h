//
// Created by Ben Short on 12/19/23.
//
#ifndef BOND_H
#define BOND_H



class Bond {
public:
    static double couponBondPrice(double couponRate, double discountRate,
        double compoundPeriods, double parValue);

    static double zeroCouponBondPrice(double monthsToMaturity, double parValue, double rateOfReturn);
};



#endif //BOND_H
