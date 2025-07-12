#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int c[9];
    int d[7];
    int id1 = -1, id2 = -1;
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> c[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            sum = 0;
            for (int k = 0; k < 9; k++)
            {
                sum += c[k];
            }
            sum -= c[i] + c[j];

            if (sum == 100)
            {
                id1 = i;
                id2 = j;
                break;
            }
        }
        if (sum == 100)
            break;
    }

    int idx = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i == id1 || i == id2) continue;
        d[idx++] = c[i];
    }

    std::sort(d, d + 7);

    for (int i = 0; i < 7; i++)
    {
        std::cout << d[i] << "\n";
    }
}
