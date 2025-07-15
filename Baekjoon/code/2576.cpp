#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int input = 0;
    int sum = 0;
    int min = 100;
    for (int i = 0; i < 7; i++)
    {
        std::cin >> input;
        if (input % 2 != 0) 
        {
            sum += input;
            if (input < min) min = input;
        }
    }
    if (sum == 0) std::cout << -1;
    else std::cout << sum << "\n" << min;
}