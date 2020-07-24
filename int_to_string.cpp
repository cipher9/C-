/*
    Make a vector holding the ten string values "zero", "one", . . . "nine". 
    Use that in a program that converts a digit to its corresponding spelled-out value; 
    e.g., the input 7 gives the output seven.
*/
#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> number{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int input;
    std::cout << "Enter a number from 0 - 9: \n";
    while(std::cin >> input)
    {
        std::cout << number[input] << '\n';
        std::cout << "Enter a number from 0 - 9: \n";
    }

    return 0;
}