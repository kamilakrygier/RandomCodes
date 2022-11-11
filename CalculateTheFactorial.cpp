#include "iostream"

long silnia (long& liczba)
{
    long result = 1;
    while (liczba != 0)
    {
        result *= liczba;
        --liczba;
    }   
    return result;
}

    int main()
    {
        std::cout << "Welcome to the program that will ccalculate the factorial!\n";
        
        long liczba = 0;
        std::cout << "Enter number, from which You would like to calculate the factorial: ";
        std::cin >> liczba;
        
        std::cout << "Result is: " << silnia (liczba);
        
        return 0;
    }