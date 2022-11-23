#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct decAndHexNumbers
{
  int decNumber;
  std::string hexNumber;
};

std::string convertToHexadecimalNumber(int& number, std::string& hexadecimalNumber)
{
  int result = 0;
  std::vector <decAndHexNumbers> values
  {
    {0, "0"}, {1, "1"}, {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"}, {8, "8"},

    {9, "9"}, {10, "A"}, {11, "B"}, {12, "C"}, {13, "D"}, {14, "E"}, {15, "F"}
  };
  
  while (number > 0)
  {
    result = number % 16;
    hexadecimalNumber += values[result].hexNumber;
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
