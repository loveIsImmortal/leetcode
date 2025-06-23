#include "Tool.hpp"
#include "TypeInt.hpp"
#include "TwoNum.hpp"

int main(int argc, char **argv){
    auto test = new TwoSum();
    std::vector<int> ves = {3, 3};
    auto result = test->twoSum(ves, 6);
    std::cout << result[0] << " " << result[1] << std::endl;
    return 0;
}