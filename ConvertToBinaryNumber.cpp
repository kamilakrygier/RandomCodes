#include <iostream>
#include <string>
#include <algorithm>

std::string convertToBinaryNumber(int& decimalNumber, std::string& binaryNumber)
{
    int numberZeroOne;
    while (decimalNumber > 0)
    {
        numberZeroOne = decimalNumber % 2;
        binaryNumber += std::to_string(numberZeroOne);
        decimalNumber /= 2;
    }
    std::reverse (binaryNumber.begin(), binaryNumber.end());
    return binaryNumber;
}

int main()
{
    std::cout << "Welcome to the program that converts a decimal number to a binary number!\n";
  
    int decimalNumber = 0;
    std::string binaryNumber = "";
  
    std::cout << "Enter a number You would like to convert: ";
    std::cin >> decimalNumber;
  
    std::cout << "Your binary number is: " << convertToBinaryNumber(decimalNumber, binaryNumber) << std::endl;
  
    return 0;
}
