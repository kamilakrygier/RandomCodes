#include <iostream>
#include <algorithm>
#include <vector>

void addNumbers(std::vector <int>& array, int size)
{
  int number = 0;
  for (int i = 0; i < size; ++i)
  {
    std::cin >> number;
    array.push_back(number);
  }
}

int findTheGreatestOne(std::vector <int>& array)
{
  std::sort(array.begin(), array.end());
  return array.back();
}

int findTheSmallestOne(std::vector <int>& array)
{
  std::sort(array.begin(), array.end());
  return array.front();
}


int main ()
{
  std::cout << "Welcome to the program that will find the smallest and the greatest element in your array!\n";
  
  std::vector <int> array;
  int size = 0;
  
  std::cout << "How many elements will be in your array?" << std::endl;
  std::cin >> size;
  
  std::cout << "Add elements to your array" << std::endl;
  
  addNumbers(array, size);
  
  std::cout << "The smallest element: " << findTheSmallestOne(array) << ", " << "The greatest element: " << findTheGreatestOne(array);
  
  return 0;
}