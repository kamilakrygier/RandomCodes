#include <iostream>

std::string changingWordToUppercase(std::string& word, std::string& wordInUppercase)
{
  for (int i = 0; i < word.length(); i++)
  {
    if (word[i] >= 97)
    {
      word[i] = word[i] - 32;
      wordInUppercase.push_back(word[i]);

    }
    else
    {
      wordInUppercase.push_back(word[i]);
    }
  }
  return wordInUppercase;
}
int main()
{
  std::cout << "Welcome to the program that will change size of the letters in word - from lowercase to uppercase\n";
  
  std::string word = "";
  std::string wordInUppercase = "";
  
  std::cout << "Enter your word: ";
  std::cin >> word;
  
  std::cout << changingWordToUppercase(word, wordInUppercase) << std::endl;
  
  return 0;
}