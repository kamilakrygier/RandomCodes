#include <iostream>
#include <string>
#include <set>

std::string checkWord(std::string& wordToCheck)
{
  std::set <char> uniqueAndSortLetters (wordToCheck.begin(), wordToCheck.end());
  
  wordToCheck = "";
  
  for (auto it : uniqueAndSortLetters)
  {
    wordToCheck += tolower(it);
  }
  return wordToCheck;
}

int main()
{
  std::cout << "Welcome to the program that will determined if your words are anagrams!\n";
  
  std::string firstWord, secondWord = "";

  std::cout << "Enter your words: ";
  std::cin >> firstWord >> secondWord;
  
  checkWord(firstWord);
  checkWord(secondWord);
  
  if (firstWord == secondWord)
  {
    std::cout << "These words are anagrams\n";
  }
  else 
  {
    std::cout << "These words aren't anagrams\n";
  }
  return 0;
}