#include <iostream>
#include <vector>
#include <string>


struct DecimalAndRoman
{
  int decimal;
  std::string roman;
};

int convertToArabic(std::string& number)
{
  int result = 0;
  std::vector <DecimalAndRoman> allValues
  {
    {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"},
    {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
  };

  for (int i = allValues.size() - 1; i >= 0 ; --i)
  {
    std::string temp1, temp2 = "";
    temp1 = number[0];
    temp2 = number.substr(0, 2);

    if (temp1 == allValues[i].roman)  
    {
      result += allValues[i].decimal;     
      number.erase(number.begin());
      i = allValues.size();
    }
    else if (temp2 == allValues[i].roman)
    {
      result += allValues[i].decimal;     
      number.erase(number.begin() + 1);
      number.erase(number.begin());
      i = allValues.size();
    }
  }
  
  return result;
}

int main()
{
  std::cout << "Welcome to the program that convert roman numeral to arabic numeral!\n";
  
  std::string number = "";
  
  std::cout << "Enter your number: ";
  std::cin >> number;
  
  std::cout << "Your number in arabic numeral: " << convertToArabic(number) << std::endl;
  
  return 0;
}

