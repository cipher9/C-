/*
    stringstream is a stream without IO operation, it does read/write operations on strings
    Input Format: the first and only line consists of n integers separated by commas.
    Output Format: Print the integers after parsing it.
*/
#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
	std::stringstream ss(str);
    std::vector<int> integers;
    int temp;   // hold number
    char comma;
    while(ss >> temp)
    {
        integers.push_back(temp);
        ss >> comma;
    }
    return integers;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}