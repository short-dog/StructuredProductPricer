//
// Created by Ben Short on 12/19/23.
//
#include "StructuredProduct.h"
#include <fstream>
#include <iostream>
#include "Options.h"
#include "Bond.h"

void StructuredProduct::structuredProductPricing(double totalPrice, double bondToOptionRatio) {
    StructuredProduct strProd;
    double optionPrice = Options::callOptionPrice(475, 475, 12, 0.05, 0.1726);
    double bondPrice = Bond::zeroCouponBondPrice(12, 1000, 0.05);

    double bondQuantity = (totalPrice * bondToOptionRatio) / bondPrice;
    double optionQuantity = totalPrice * ((1 - bondToOptionRatio)) / optionPrice;

    //S&P500
    //Best: 15%
    //Average: 7.5%
    //Worst: 15%

    double currentPrice = 475;
    double bestEnd = currentPrice * pow((1 + 0.15), 3);
    double avgEnd = currentPrice * pow((1 + 0.075), 3);
    double worstEnd = currentPrice * pow((1 - 0.15), 3);

    double optionCost = optionPrice * optionQuantity;
    double bondCost = bondPrice * bondQuantity;
    double totalCost = optionCost + bondCost;

    double bestOption = (bestEnd - currentPrice) * optionQuantity;
    double avgOption = (avgEnd - currentPrice) * optionQuantity;
    double worstOption;
    if (worstEnd > currentPrice) {
        worstOption = (worstEnd - currentPrice) * optionQuantity;
    }
    else worstOption = -((1 - bondToOptionRatio) * totalPrice);

    double bestFinalReturn = (totalCost + bestOption + (bondQuantity * 1000)) - totalPrice;
    double avgFinalReturn = (totalCost + avgOption + (bondQuantity * 1000)) - totalPrice;
    double worstFinalReturn = (totalCost + worstOption + (bondQuantity * 1000)) - totalPrice;

    StructuredNote structuredNote;
    std::cout << "Bond Price: " << bondPrice << std::endl;
    structuredNote.bondPrices = bondPrice;
    std::cout << "Option Price: " << optionPrice << "\n" << std::endl;
    structuredNote.optionPrices = optionPrice;

    std::cout << "Bond Quantity: " << bondQuantity << std::endl;
    structuredNote.bondQuantities = bondQuantity;
    std::cout << "Option Quantity: " << optionQuantity << "\n" << std::endl;
    structuredNote.optionsQuantities = optionQuantity;


    std::cout << "Bond Cost: " << bondCost << std::endl;
    structuredNote.bondCosts = bondCost;
    std::cout << "Option Cost: " << optionCost << "\n" << std::endl;
    structuredNote.optionCosts = optionCost;

    std::cout << "Best Return: " << bestFinalReturn << std::endl;
    structuredNote.bestReturns = bestFinalReturn;
    std::cout << "Avg Return: " << avgFinalReturn << std::endl;
    structuredNote.avgReturns = avgFinalReturn;
    std::cout << "Worst Return: " << worstFinalReturn << std::endl;
    structuredNote.worstReturns = worstFinalReturn;

    structuredNotes.push_back(structuredNote);
}
void StructuredProduct::exportCSV() {
    std::ofstream csvFile("csvStructuredExport.csv");
    csvFile << cat1 << "," << cat2 << "," << cat3 << "," << cat4 << "," << cat5 << "," << cat6 << "," << cat7 << "," << cat8 << "," << cat9 <<"\n";
    for (const auto& row : structuredNotes) {
        csvFile << row.bondPrices << "," << row.optionPrices << "," << row.bondQuantities << "," << row.optionsQuantities << "," <<
            row.bondCosts << "," << row.optionCosts << "," << row.bestReturns << "," << row.avgReturns << "," <<row.worstReturns << "\n";
    }
    csvFile.close();
}
