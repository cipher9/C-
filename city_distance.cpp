/*
    Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route. 
    Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between 
    two neighboring cities. Find and print the mean distance between two neighboring cities.
    To exit out of prompt loop, enter any non numeric input.
*/
#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter distance between two cities: \n";
    double distance;
    std::vector<double> distances;
    while(std::cin>>distance)
        distances.push_back(distance);

    double min = distances[0];
    double max = 0;
    double sum = 0;
    for(double x:distances)
    {
        if(x < min)
            min = x;
        if(x > max)
            max = x;
        sum += x; 
    }

    std::cout << "The total distance of the route is: " << sum << '\n';
    std::cout << "The shortest distance between cities is: " << min << '\n';
    std::cout << "The larghest distance between cities is: " << max << '\n';
    std::cout << "The mean distance between cities is: " << sum/distances.size();

    return 0;
}