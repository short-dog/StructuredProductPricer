//
// Created by Ben Short on 12/19/23.
//

#ifndef BOND_H
#define BOND_H



class Bond {
public:
    static double bondPrice(double couponRate, double discountRate,
        double compoundPeriods, double parValue);
};



#endif //BOND_H
