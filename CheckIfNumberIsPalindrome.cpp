#include <iostream>
#include <algorithm>

bool isNumberPalindrome(std::string& number, std::string& numberReverse)
{
    if (number == numberReverse)
    {
        return true;
    }
    return false;
}

void reverseNumber(std::string& numberReverse)
{
    std::reverse(numberReverse.begin(), numberReverse.end());
}

int main()
{
    std::cout << "Welcome to the program which will check if your number is palindrome!\n";

    std::string number = "";
  
    std::cout << "Please write a number, You would like to check: ";
    std::cin >> number;
    
    std::string numberReverse = number;
    
    reverseNumber(numberReverse);
    
    std::cout << std::boolalpha << isNumberPalindrome(number, numberReverse) << std::endl;

    return 0;
}