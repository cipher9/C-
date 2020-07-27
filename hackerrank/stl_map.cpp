/*
    Exercise to learn map in STL, the concept of iterators came more clearly in this exercise however upon further
    research, there is a lot to iterators. Here is an example that explains iterators well:

    std::vector<int>::iterator itr1 = v.begin();
    std::vector<int>::iterator itr2 = v.end();
    for(std::vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
        std::cout << *itr << " "; 
    std::sort(itr1, itr2)

    This example reveals a lot about iterators. The iterator type is defined inside vector, and itr behaves just like a pointer.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

int main() {
    int size, q;
    std::string name;
    std::map<std::string,int>m;
    std::cin >> size;
    for(int i = 0; i < size; ++i)
    {
        int score = 0;
        std::cin >> q;
        if(q == 1){
            std::cin >> name >> score;
            std::map<std::string,int>::iterator itr=m.find(name);
            if(itr!=m.end())
                m[name] += score;
            m.insert(std::make_pair(name,score));
        }
        else if(q == 2){
            std::cin >> name;
            m.erase(name);
        }
        else if(q == 3){
            std::cin >> name;
            std::cout << m[name] << '\n';
        }
        else {
            std::cout << "Bad query on index " << i << "\n";
            break;
        }
    }
    return 0;
}