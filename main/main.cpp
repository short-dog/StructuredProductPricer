#include <iomanip>
#include <iostream>
#include "src/Bond.h"
#include "src/Options.h"

int main(){
    std::cout << std::fixed << std::setprecision(2) << Bond::bondPrice(0.065, 0.055, 15, 1000) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << Options::callOptionPrice(470, 474.84, 1, 0.0543, 0.0);

    //0.8%
    return 0;
}
