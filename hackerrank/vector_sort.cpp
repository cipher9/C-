/*
    Simple and fun exercise on sorting a vector.
    https://www.hackerrank.com/challenges/vector-sort/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int size, temp;
    std::vector<int> numbers;
    std::cin >> size;
    for(int i = 0; i < size; ++i)
    {   
        std::cin >> temp;
        numbers.push_back(temp);
    }

    std::sort(numbers.begin(), numbers.end());
    for(int x : numbers)
        std::cout << x << ' ';

    return 0;
}
