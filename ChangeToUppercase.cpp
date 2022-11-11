#include <iostream>
#include <string>

std::string changeToUppercase(std::string& word, std::string& wordInUppercase)
{
    for (int i = 0; i < word.length(); ++i)
    {
        wordInUppercase += toupper(word[i]);
    }
    return wordInUppercase;
}

int main()
{
    std::cout << "Welcome to the program that will change the size of the letters in word - from lowercase to uppercase!\n";

    std::string word, wordInUppercase = "";
    
    std::cout << "Enter your word: ";
    std::cin >> word;

    std::cout << changeToUppercase(word, wordInUppercase) << std::endl;

    return 0;
}