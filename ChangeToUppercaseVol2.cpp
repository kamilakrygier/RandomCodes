#include <iostream>

std::string changingWordToUppercase (std::string& word, std::string& wordInUppercase)
{
    for (int i = 0; i < word.length(); i++)
    {
        wordInUppercase += word[i] - 32;
    }
    return wordInUppercase;
}
int main()
{
    std::cout << "Welcome to the program which will change size of the letters in word - from lowercase to uppercase\n";
    
    std::string word, wordInUppercase = "";
    
    std::cout << "Enter your word: ";
    std::cin >> word;
    
    std::cout << changingWordToUppercase(word, wordInUppercase) << std::endl;
    
    return 0;
}