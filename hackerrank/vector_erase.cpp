/*
    The first line of the input contains an integer which is the size of input numbers for a vector. The next line contains space separated 
    integers for a vector. The third line contains a single integer denoting the position of an element that should be removed from the vector.
    The fourth line contains two integers denoting the range that should be erased from the vector inclusive of a and exclusive of b. For more info check out:
    https://www.hackerrank.com/challenges/vector-erase/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int size, index, temp;
    std::vector<int> numbers;
    int ar[2];

    std::cin >> size;
    int count = 0;
    while(count < size)
    {
        std::cin >> temp;
        numbers.push_back(temp);
        ++count;
    }
    
    std::cin >> index >> ar[0] >> ar[1];

    numbers.erase(numbers.begin()+(index-1));
    numbers.erase(numbers.begin()+(ar[0]-1), numbers.begin()+(ar[1]-1));

    std::cout << numbers.size() << '\n';
    for(int x:numbers)
        std::cout << x << ' ';

    return 0;
}
