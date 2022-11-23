#include <iostream>

int checkHowManyBits (int& number)
{
  int bits = 0;
  
  for (int i = 0; i < 32; i++)
  { 
      
    if (number & 1)
    {
        bits++;
    }
    number >>= 1;
  }
  return bits;
}



int main()
{
  std::cout << "Welcome to the program that will check how many bits your number have!\n";
  
  int number = 0;
  
  std::cout << "Enter number: ";
  std::cin >> number;
  
  std::cout << checkHowManyBits (number);
  
  return 0;
}