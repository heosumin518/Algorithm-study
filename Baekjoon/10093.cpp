#include <iostream>

int main()
{
    long long a, b;
    std::cin >> a >> b;

    long long c, d;

    if (a > b)
    {
        d = a;
        c = b;
    }
    else
    {
        c = a;
        d = b;
    }


    int cnt = 0;
    for (long long i = c + 1; i < d; i++)
    {
        cnt++;
    }
    std::cout << cnt << "\n";

    for (long long i = c + 1; i < d; i++)
    {
        std::cout << i << " ";
    }
}