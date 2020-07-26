/*
    Another fun exercise about STL sets.
    https://www.hackerrank.com/challenges/cpp-sets/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

int main() {
    int size, q, x;
    std::set<int> s;
    std::cin >> size;
    for(int i = 0; i < size; ++i)
    {
        std::cin >> q >> x;
        if(q == 1)
            s.insert(x);
        else if(q == 2)
            s.erase(x);
        else if(q == 3)
        {
            std::set<int>::iterator itr=s.find(x); 
            if(itr!=s.end())
                std::cout << "Yes\n";
            else
                std::cout << "No\n";
        }
    }
    return 0;
}