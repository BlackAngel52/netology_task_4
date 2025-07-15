#include <iostream>

int main()
{
    int count{};
    int input{ 1 };
    int summ{};
    while (input != 0){
        std::cout << "Enter number, or enter 0 to exit: " << std::endl;
        std::cin >> input;
        summ += input;
    }
    std::cout << "Summ = " << summ << std::endl;
    
}
