#include "src/StructuredProduct.h"

int main() {
    StructuredProduct strProd;
    int ratioDivision = 100;
    for (int i = 0; i < ratioDivision; i++) {
        double ratio = static_cast<double>(i)/ratioDivision;
        strProd.structuredProductPricing(1000, ratio);
    }
    strProd.exportCSV();
    return 0;
}
