/*
    Exercise demonstrating the use of lower_bound in STL. 
    I originally had: on line 18 std::vector<int>::iterator it,lower; and on line 35 if(it != v.end());. Interestingly having two iterators
    is very costly and this kind of implementation should not be attempted unless absolutely necessary.

    https://www.hackerrank.com/challenges/cpp-lower-bound/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int size, q, temp;
    std::vector<int> v;
    std::vector<int>::iterator lower;
    
    std::cin >> size;
    for(int i = 0; i < size; ++i)
    {
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cin >> q;
    for(int i = 0; i < q; ++i)
    {
        std::cin >> temp;

        lower = std::lower_bound (v.begin(), v.end(), temp);
        // wanted to practice the ternary operator, the if/else is more readable
        // std::cout << (v[lower - v.begin()] == temp ? "Yes " : "No ") << lower - v.begin()+1) << '\n';
        if (v[lower - v.begin()] == temp)
            std::cout << "Yes " << lower - v.begin()+1 << '\n';
        else 
            std::cout << "No " << lower - v.begin()+1 << '\n';   
    }

    return 0;
}
