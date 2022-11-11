#include <iostream>
#include <algorithm>


bool isNumberPalindrome (std::string& number, std::string& numberReverse)
{
    if (number == numberReverse)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void reverseNumber (std::string& numberReverse)
{
    std::reverse (numberReverse.begin (), numberReverse.end ());
}

int main ()
{
    std::cout << "Please write a number, You would like to check if its palindrome" << std::endl;
    
    std::string number;
    std::cin >> number;
    
    std::string numberReverse = number;
    
    reverseNumber (numberReverse);
    
    std::cout << std::boolalpha << isNumberPalindrome (number, numberReverse);

    return 0;
}