#include <iostream>
#include <vector>

void numberOfGrades(int& choose)
{
  if (choose == 0)  
  {
    std::cout << "Sorry, You have to have grades to calculate the average :(";
    exit(0);
  }
  else if (choose == 1)
  {
    std::cout << "Unfortunately, we cannot calculate an average from one grade :(";
    exit(0);
}
  else
  {
    std::cout << "You selected the average of " << choose << " grades\n";
  }
}

float averageOfGrades(int& choose, float& average)
{
  float grade = 0.f;
  float suma = 0.f;
  
  for (int i = 0; i < choose; i++)
  {
    std::cout << "Enter your " << i+1 << " grade: ";
    std::cin >> grade;
    
    suma += grade;
  }
  average = suma / choose;
  return average;
}

void redStripe(float& average)
{
  if (average >= 4.75)
  {
    std::cout << " \n";
    std::cout << "Congratulations! You earned red stripe this year\n";
}
  else if (average < 4.75)
  {
    std::cout << " \n";
    std::cout << "You didn't earned red stripe this year. But don't worr! You have many years ahead of You to try again\n";
  }
}

int main()
{
  std::cout << "Welcome to the program that will calculate the average of your grades!\n";
  
  int choose = 0;
  float average = 0;
  
  std::cout << "Select the number of grades from which You would like to calculate the average: ";
  std::cin >> choose;
  std::cout << " \n";
  
  numberOfGrades(choose);
  
  averageOfGrades(choose, average);

  std::cout << "Your average is: " << average << std::endl;

  redStripe(average);

  return 0;
}