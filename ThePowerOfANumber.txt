#include <iostream>
#include <math.h>

void powerOfNumber(long& number, long& power, long& result)
{
    if (number == 0)
    {
        result = 0;
    }
    else 
    {   
        std::cout << "Enter the power of a number: ";
        std::cin >> power;
            
            if (power < 0)
            {
                std::cout << "Sorry, we cannot have minus power of number\n";
            }
            else if (power == 0)
            {
                result = 1;
            }
            else if (power == 1)
            {
                result = number;
            }
            else
            {
                result = pow (number, power);
            }
            
        
    }   
}       

int main()
{
    std::cout << "Welcome to the program, which will calculate the power of a number!\n";
    std::cout << " \n";
    
    long number, power, result = 0;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    powerOfNumber(number, power, result);
    
    if (power >= 0)
    {
        std::cout << "Your result is: " << result << std::endl;
    }
    return 0;
}
