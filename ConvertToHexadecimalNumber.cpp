#include <iostream>
#include <string>
#include <algorithm>

std::string convertToHexadecimalNumber(int& number, std::string& hexadecimalNumber)
{
  std::string hexadecimalNumerals = "0123456789ABCDEF";
  while (number > 0)
  {    
    int temp = number % 16;
    hexadecimalNumber += hexadecimalNumerals[temp];
    number /= 16;
  }
  std::reverse(hexadecimalNumber.begin(), hexadecimalNumber.end());
  
  return hexadecimalNumber;
}

int main()
{
  std::cout << "Welcome to the program that converts a decimal number to a hexadecimal number!\n";

  int number = 0;
  std::string hexadecimalNumber = "";

  std::cout << "Enter a number You would like to convert: ";
  std::cin >> number;

  std::cout << "Your hexadecimal number is: " << convertToHexadecimalNumber(number, hexadecimalNumber) << std::endl;
  
  return 0;
}