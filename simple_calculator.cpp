#include <iostream>

int main()
{
    double operand1, operand2, answer;
    char operation;
    while(std::cin>>operand1,std::cin>>operand2,std::cin>>operation)
    {
        switch(operation)
        {
            case '+':
                answer = operand1 + operand2;
                break;
            case '-':
                answer = operand1 - operand2;
                break;
            case '*':
                answer = operand1 * operand2;
                break;
            case '/':
                answer = operand1 / operand2;
                break;
        }
        std::cout << answer <<'\n';
        std::cin.clear();
    }
}
