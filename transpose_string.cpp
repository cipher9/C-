/*
    Very simple program that swap two letters in a string
*/
#include <iostream>
#include <string>

void swap(std::string& str, char& one, char& two)
{
    char temp;
    int index_one, index_two;
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == one)
            index_one = i;
        if(str[i] == two)
            index_two = i;
    }
    temp = str[index_one];
    str[index_one] = str[index_two];
    str[index_two] = temp;
}

int main()
{
    std::string str;
    char one, two;
    std::cout << "Enter a string: \n";
    std::cin >> str;
    std::cout << "What two letters would you like to swap? \n";
    std::cin >> one >> two;
    swap(str, one, two);
    
    std::cout << str;

    return 0;
}