#include <iostream>
#include <cctype>

std::string changingWordToUppercase(std::string& word)
{
    
    for (auto& it : word)
    {
        if (islower(it))
        {
            it -= 32;
        }
    }
    return word;
}
int main()
{
    std::cout << "Welcome to the program which will change size of the letters in word - from lowercase to uppercase\n";
    
    std::string word = "";
    
    std::cout << "Enter your word: ";
    std::cin >> word;
    
    std::cout << changingWordToUppercase(word) << std::endl;
    
    return 0;
}