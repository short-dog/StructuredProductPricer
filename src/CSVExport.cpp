//
// Created by Ben Short on 12/19/23.
//
#include "CSVExport.h"
#include "StructuredProduct.h"
#include <fstream>
#include <sstream>
#include <string>

std::vector<std::string> CSVExport::createFile() {
    std::ofstream csvFile("csvStructuredExport.csv");
    std::vector<std::string> row1 = {"Bond Price", "Option Price", "Bond Quantity",
        "Option Quantity", "Bond Cost", "Option Cost", "Best Return"
   , "Avg Return", "Worst Return"};
    return row1;
}
