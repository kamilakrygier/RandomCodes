#include <iostream>

int factorial(int number)
{
    if (number == 1)
    {
      return number;
    }
    return number * factorial(number - 1);
}

int main()
{
   std::cout << "Welcome to the program which will calculate the factorial of a number!\n";
   
   int number = 0;
   
   std::cout << "Enter number You would like to calculate the factorial from: ";
   std::cin >> number;
   
   std::cout << factorial(number) << std::endl;
   
   return 0;
}
