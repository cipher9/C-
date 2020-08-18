#include <iostream>
#include <vector>

int main ()
{
    int temp;
    char stop = '|';
    std::cout << "Enter some integers: \n";
    std::vector<int> v;
    while(std::cin >> temp >> stop)
    {
        v.push_back(temp);
        if(stop == '|')
            break;
    }

    int min = 0;
    int max = 0;
    // for(int x:v)
    // {
    //     if(x%2 == 0)
    //     {
    //         if(x < min)
    //             min = x;
    //     }
    //     else
    //     {
    //         if(x > max)
    //             max = x;
    //     }
    // }
    for(int i = 0; i < v.size(); ++i)
    {
        if(v[i]%2 == 0)
        {
            if(v[i] < min)
                min = v[i];
        }
        else
        {
            if(v[i] > max)
                max = v[i];
        }
    }


    std::cout << "The minumum even number is: " << min << "\nThe maximum odd number is: " << max;

    return 0;
}