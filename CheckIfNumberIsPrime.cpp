#include <iostream>

int checkNumber(int& number, int& result)
{
  if (number <= 1)
  {
    std::cout << "Your number isn't prime!";
    exit(0);
  }
  
  for (int i = 2; i <= number; i++)
  {
    if (number % i == 0)
    {
      result ++;
    }
  }
  return result;
}

void ifYourNumberIsPrime(int& result)
{
  if (result == 2)
  {
    std::cout << "Your number is prime!" << std::endl;
  }
  else
  {
    std::cout << "Your number isn't prime!" << std::endl;
  }
}

int main()
{
 std::cout << "Welcome to porgram that will determied if your number is prime\n";
 
 int number = 0;
 int result = 0;
 
 std::cout << "Enter your number: ";
 std::cin >> number;
 
 checkNumber(number, result);
 
 ifYourNumberIsPrime(result);
 
 return 0;
}