#include <iostream>
#include <vector>

struct decimalAndRoman
{
    int decimal;
    std::string roman;
};

std::string convertToRoman(int& number)
{
    std::string result = "";
    std::vector <decimalAndRoman> allValues
    {
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "V"}, {40, "XL"}, {50, "L"},
        {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
    };
    for (int i = allValues.size() - 1; i >= 0 ; --i)
    {
        while (number - allValues[i].decimal >= 0)
        {
            result += allValues[i].roman;
            number -= allValues[i].decimal;
        }
    }
    return result;
}

int main()
{
    std::cout << "Welcome to the program which convert arabic numeral to roman numeral!\n";
    
    int number = 0;
    std::cout << "Enter your number: ";
    std::cin >> number;
    
    std::cout << "Your number in roman numeral: " << convertToRoman(number) << std::endl;
    
    return 0;
}