#include <iostream>

long factorial(long& number)
{
  long result = 1;
  while (number != 0)
    {
        result *= number;
        --number;
    }   
  return result;
}

    int main()
    {
        std::cout << "Welcome to the program that will calculate the factorial of a number!\n";
        
        long number = 0;
      
        std::cout << "Enter number, from which You would like to calculate the factorial: ";
        std::cin >> number;
        
        std::cout << "Result is: " << factorial(number);
        
        return 0;
    }