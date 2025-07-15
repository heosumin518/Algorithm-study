#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int c[5];
    int median = -1;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> c[i];
        sum += c[i];
    }
    std::sort(c, c+5);
    median = c[2];
    std::cout << sum / 5 << "\n" << median;
}