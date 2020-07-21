/*
    A simple program that takes in input string and push back into a vector.
    The program outputs the number of words in the vector, then sorts the vector
    to output the words without any duplicates. To terminate input stream Ctrl+Z
    in Windows or Ctrl+D in Unix or input "|" and then press enter.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> words;
    for(string temp; cin>>temp;)
    {
        words.push_back(temp);
        if(temp=="|")
            break;
    }

    cout << "\nNumber of words: " << words.size() << '\n';
    sort(words.begin(), words.begin()+words.size());

    for(int i = 0; i<words.size(); ++i)
        if(i==0||words[i-1]!=words[i])
            cout<<words[i]<<'\n';
    
    return 0;
}