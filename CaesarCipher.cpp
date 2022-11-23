#include <iostream>
#include <string>
#include <ctype.h>

std::string caesarCipher (int& choose, std::string& sentence, int& number)
{
  std::string result = "";
    
  switch(choose)
  {
    case 0:
    {
      for (int i = 0; i < sentence.size(); i++)
      {
        if (isupper(sentence[i]))
        {
          result += ((sentence[i] - 65) + number) % 26 + 65;
        }
        else if (islower(sentence[i]))
        {
          result += ((sentence[i] - 97) + number) % 26 + 97;
        }
        else if (isdigit(sentence[i]))
        {
          result += ((sentence[i] - 48) + number) % 10 + 48;
        }
        else
        {
          result += sentence[i];
        }
      }
      break;
    }
    case 1:
    {
      for (int i = 0; i < sentence.size(); i++)
      {
        if (isupper(sentence[i]))
        {
          result += ((sentence[i] - 65) - number) % 26 + 65;
        }
        else if (islower(sentence[i]))
        {
          result += ((sentence[i] - 97) - number) % 26 + 97;
        }
        else if (isdigit(sentence[i]))
        {
          result += ((sentence[i] - 48) - number) % 10 + 48;
        }
        else
        {
          result += sentence[i];
        }
      }
      break;
    }
  }
  return result;
}

int main()
{
  std::cout << "Welcome to the program that code sentences to Caesar Cipher!\n";
  
  int choose = 0;
  std::string sentence = "";
  int number = 0;

  std::cout << "Enter  0  if you want to encrypt and  1  if you want to decrypt: ";
  std::cin >> choose;
  std::cin.ignore();
  
  if (choose != 1 && choose != 0) 
  {
    std::cout << "You have choosen the wrong number" << std::endl;
    exit(0);
  }
  
  std::cout << "Write your sentence: ";
  std::getline(std::cin, sentence);
  
  std::cout << "Enter the number that will determine the cipher: ";
  std::cin >> number;
  
  std::cout << "Your sentence coded: " << caesarCipher(choose, sentence, number) << std::endl;

  return 0;
}