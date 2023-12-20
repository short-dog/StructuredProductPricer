//
// Created by Ben Short on 12/19/23.
//
#ifndef STRUCTUREDPRODUCT_H
#define STRUCTUREDPRODUCT_H
#include <vector>


class StructuredProduct {
public:
    struct StructuredNote {
        double bondPrices;
        double optionPrices;
        double bondQuantities;
        double optionsQuantities;
        double bondCosts;
        double optionCosts;
        double bestReturns;
        double avgReturns;
        double worstReturns;
    };
    void structuredProductPricing(double totalPrice, double bondToOptionRatio);
    std::vector<StructuredNote> structuredNotes;
};



#endif //STRUCTUREDPRODUCT_H
