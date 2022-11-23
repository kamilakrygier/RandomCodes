#include <iostream>

bool ifYourNumberIsPrime(int& number)
{
  if (number <= 1)
  {
    return false;
  }
  
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
     return false;
    }
  }
  return true;
}

int main()
{
 std::cout << "Welcome to porgram that will determied if your number is prime\n";
 
 int number = 0;
 
 std::cout << "Enter your number: ";
 std::cin >> number;
 
 if (ifYourNumberIsPrime(number))
 {
   std::cout << "Your number is prime!";
 }
 else
 {
   std::cout << "Your number isn't prime!";
 }
 
 return 0;
}