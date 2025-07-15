#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    int young = 0, minsik = 0;
    int t;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> t;

        int left = 0;

        young += (t / 30) * 10;
        left = t % 30;
        if (left >= 0) young += 10;

        minsik += (t / 60) * 15;
        left = t % 60;
        if (left >= 0) minsik += 15;
    }

    if (minsik < young) std::cout << "M " << minsik;
    else if (young < minsik) std::cout << "Y " << young;
    else std::cout << "Y M " << young;
}