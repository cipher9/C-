#include <iostream>
#include <string>

#define ALPHA_SIZE 52

int main()
{
    std::string password = "David";
    char alphabet[ALPHA_SIZE] = {'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M',
                                'n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z'};
    std::string answer;
    int j = 0;
    for(int i = 0; i < password.size(); ++i)
    {
        while(j < ALPHA_SIZE)
        {
            if(password[i] == alphabet[j])
            {
                answer += alphabet[j];
                break;
            }
            ++j;
        }
    }
    std::cout << answer;

}