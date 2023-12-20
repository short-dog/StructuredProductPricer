//
// Created by Ben Short on 12/19/23.
//
#ifndef CSVEXPORT_H
#define CSVEXPORT_H
#include <fstream>
#include <string>
#include <vector>


class CSVExport {
public:
    static std::string doubleToString(double number);
    static std::vector<std::string> createFile();
    static std::vector<std::string> writeVector(std::string bondPrice, std::string optionPrice,
                                                std::string bondQuantity, std::string optionQuantity,
                                                std::string bondCost, std::string optionCost, std::string bestReturn,
                                                std::string avgReturn,
                                                std::string worstReturn);

    static std::string vectorConvert(const std::vector<std::string>&data);

    static void writeFile();
    static std::vector<std::string> row1;
    static std::vector<std::string> structuredVector;
};



#endif //CSVEXPORT_H
