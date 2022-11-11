#include <iostream>
#include <string>
#include <set>
#include <bits/stdc++.h>

std::string sortingSentence (std::string& sentence)
{
    std::transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    std::set <char> sortedSentence (sentence.begin(), sentence.end());
    sentence = "";
    for (auto it : sortedSentence)
    {
        if (it != ' ')
        {
            sentence += it;
        }
    }
    return sentence;
}

void creatingPangram (std::string& pangram)
{
    for (int i = 0; i < 26; ++i)
    {
        pangram += 97 + i;
    }
}

bool comperingSentences (std::string& sentence, std::string& pangram)
{
    if (sentence == pangram)
    {
        return true;
    }
    
    return false;
}

int main()
{
    std::cout << "Welcome to the program which will check if your sentence is pangram!\n";
    
    std::string sentence, pangram = "";
    
    std::cout << "Write your sentence (only English Alphabet without special signs): ";
    std::getline(std::cin, sentence);
    
    sortingSentence(sentence);
    
    creatingPangram(pangram);
    
    std::cout << std::boolalpha << comperingSentences(sentence, pangram) << std::endl;
    
    return 0;
}