#include <iostream>

int main()
{
    int arr[3][3], i, j;
    std::cout << "Enter a 3x3 array to transpose: \n";
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
            std::cin >> arr[i][j];

    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
            std::cout << arr[j][i] << " ";
        std::cout << '\n';
    }
    
    return 0;
}