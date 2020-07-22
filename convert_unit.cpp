/*
    A simple unit converter that takes cm/in/ft/m inputs and converts them into m.
    The program calculates the sum and outputs all input values(in meters and sorted).
    Very minimalistic and stripped down, will add to it if I come back to it.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    double a, sum, max;
    double min = 0;
    std::vector<double> values;  // holds all values entered

    std::string unit ="";
    std::cout << "Enter a number with it's unit: \n";
    while(std::cin>>a,std::cin>>unit)
    {
        double temp;
        if(unit == "stop")
            break;
        else if(unit == "cm")
            temp = a/100;
        else if(unit == "in")
            temp = a*2.54/100;
        else if(unit == "ft")
            temp = a*12*2.54/100;
        else if(unit == "m")
            temp = a;
        else
        {
            std::cout << "Cannot determine units\n";
            continue;
        }

        values.push_back(temp);
        sum += temp;
        if(temp > max)
            max = temp;
        if(temp < min||min==0)
            min = temp;
        std::cout << "The smallest value is: " << min << "m The largest value is: " << max << "m\n";
    }

    std::sort(values.begin(), values.end());
    std::cout << "The smallest value is: " << min << "m The largest value is: " << max << "m\n";
    std::cout << "The sum is: " << sum << "m\n";
    std::cout << "All input values: ";
    for(double x:values)
        std::cout << x << ',';

    return 0;

    
}