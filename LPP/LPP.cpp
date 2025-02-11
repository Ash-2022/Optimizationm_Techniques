#include "LPP.h"

int main(){
    std::cout << "Enter num of Decision Variables : ";
    size_t numVariables{0};
    std::cin >> numVariables;
    std::cout << "Enter num of Constraints : ";
    size_t numConstraints{0};
    std::cin >> numConstraints;
    LPP lppFormulation(numVariables, numConstraints);
    lppFormulation.displayOriginalLPP();
    return 0;
}
