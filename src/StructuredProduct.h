//
// Created by Ben Short on 12/19/23.
//
#ifndef STRUCTUREDPRODUCT_H
#define STRUCTUREDPRODUCT_H
#include <string>
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

    void exportCSV();

    std::vector<StructuredNote> structuredNotes;

    std::string cat1 = "Bond Price";
    std::string cat2 = "Option Price";
    std::string cat3 = "Bond Quantity";
    std::string cat4 = "Option Quantity";
    std::string cat5 = "Bond Cost";
    std::string cat6 = "Option Cost";
    std::string cat7 = "Best Return";
    std::string cat8 = "Average Return";
    std::string cat9 = "Worst Return";
};



#endif //STRUCTUREDPRODUCT_H
