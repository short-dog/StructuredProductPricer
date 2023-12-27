#include "src/StructuredProduct.h"
#include "src/CSVExport.h"

int main() {
    StructuredProduct strProd;
    for (int i = 0; i < 10; i++) {
        double ratio = static_cast<double>(i)/10;
        strProd.structuredProductPricing(1000, ratio);
    }
    strProd.exportCSV();
    return 0;
}
