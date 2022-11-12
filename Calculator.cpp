#include <iostream>

void actions ()
{
    std::cout << "These are the actions You can choose from:\n";
    std::cout << " \n";
    std::cout << " +  addition\n";
    std::cout << " \n";
    std::cout << " -  substraction\n";
    std::cout << " \n";
    std::cout << " *  multiplication\n"; 
    std::cout << " \n";
    std::cout << " /  division\n";
    std::cout << " \n";
}

float operationsOfTheCalculator (float& number, char& operation, float& result)
{
    std::cin >> number;
    result = number;
    
    while (operation != '=')
    {
        std::cin >> operation;
        if (operation != '=')
        {
            std::cin >> number;
        }
            
        switch (operation)
        {
            case '+':
            result += number;
            break;
            case '-':
            result -= number;
            break;
            case '*':
            result *= number;
            break;
            case '/':
            result /= number;
            break;
            case '=':
            result;
            break;
            default:
            std::cout << "Sorry, We don't have this kind of action\n";
        }
    }
    return result;
}

int main ()
{
    float number, result = 0;
    char operation;
    
    std::cout << "Welcome to calculator!\n";
    std::cout << " " << std::endl;
    
    actions ();
    
    std::cout << "Enter the numbers and actions You would like to perform: ";
    
    operationsOfTheCalculator (number, operation, result);
    
    std::cout << "Your result is: " << result << std::endl;
    std::cout << " \n";
    std::cout << "Thank You for using calculator :)\n";
    
    return 0;
}