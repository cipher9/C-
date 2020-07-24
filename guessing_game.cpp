/*
    Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program asks questions 
    to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program should be able to 
    identify the number after asking no more than seven questions.
*/
#include <iostream>

int main()
{
    char reply;
    int min = 1;
    int max = 100;
    int mid = 51;
    std::cout << "Answer with 'n' for no and 'y' for yes \n";
    while(max!=min)
    {
        std::cout << "Is your number less than " << mid << "?\n";
        std::cin >> reply;
        if(reply == 'y')
            max = (max + min)/2;
        else if(reply == 'n')
            min = (max + min + 1)/2;
        else
            std::cout << "Cannot understand your reply\n";
        mid = (max+min+1)/2;
    }
    std::cout << "Your number is: " << min << '\n';

    return 0;
}