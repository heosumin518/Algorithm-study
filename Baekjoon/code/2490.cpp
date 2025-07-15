#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    for (int i = 0; i < 3; i++)
    {
        int c[4];
        std::cin >> c[0] >> c[1] >> c[2] >> c[3];

        int sum = 0;
        for (int i = 0; i < 4; i++)
            if (c[i] == 0) sum++;

        if (sum == 1) std::cout << "A" << "\n";
        else if (sum == 2) std::cout << "B" << "\n";
        else if (sum == 3) std::cout << "C" << "\n";
        else if (sum == 4) std::cout << "D" << "\n";
        else std::cout << "E" << "\n";
    }
}