#include <iostream>
#include <string>
#include <vector>

struct AlphabetMorse
{
  char character1;
  char character2;
  std::string morse;
};

std::string convertToMorseCode(std::string& sentence)
{
  std::string result = "";
    
  std::vector <AlphabetMorse> allCharacters 
  {
    {'A', 'a', ". –"}, {'B', 'b', "– . . ."}, {'C', 'c', "– . – ."}, {'D', 'd', "– . ."}, {'E', 'e', "."}, {'F', 'f', ". . – ."}, {'G', 'g', "– – ."}, {'H', 'h', ". . . ."}, {'I', 'i', ". ."}, {'J', 'j', ". – – –"}, {'K', 'k', "– . –"}, {'L', 'l', ". – . ."}, {'M', 'm', "– –"}, {'N', 'n', "– ."}, {'O', 'o', "– – –"}, {'P', 'p', ". – – ."}, {'Q', 'q', "– – . –"},{'R', 'r', ". – ."}, {'S', 's', ". . ."}, {'T', 't', "–"}, {'U', 'u', ". . –"}, {'V', 'v', ". . . –"}, {'W', 'w', ". – –"}, {'Y', 'y', "– . – –"}, {'Z', 'z', "– – . ."}, {'0', '0', "– – – – –"}, {'1', '1', ". – – – –"}, {'2', '2', ". . – – –"}, {'3', '3', ". . . – –"}, {'4', '4', " . . . . –"}, {'5', '5', " . . . . ."}, {'6', '6', " – . . . ."}, {'7', '7', " – – . . ."}, {'8', '8', " – – – . ."}, {'9', '9', "– – – – ."}, {' ', ' ', "/"}, {',', ',', "– – . . – –"}, {'.', '.', ". – . – . –"}, {'?', '?', ". . – – . ."}, {'!', '!', "– . – . – –"}
  };
    
  for (int i = 0; i < sentence.length(); i++)
  {

    for (int j = 0; j < allCharacters.size(); j++)
    {
      if (sentence[i] == allCharacters[j].character1 || sentence[i] == allCharacters[j].character2)
      {
        result += allCharacters[j].morse + "  ";
      }
    } 
  }
  
  return result;
}

int main()
{
  std::cout << "Welcome to the program that convert sentences to morse code!\n";
  
  std::string sentence = "";
  
  std::cout << "Enter your sentence: ";
  std::getline(std::cin, sentence);
  
  std::cout << "Your sentence in morse code is: " << convertToMorseCode(sentence) << std::endl;
  
  return 0;
}