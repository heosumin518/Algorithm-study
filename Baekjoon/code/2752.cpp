#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int a, b, c;
    std::cin >> a >> b >> c;

    int d, e, f;
    d = std::min({a, b, c});
    f = std::max({a, b, c});
    e = a+b+c-d-f;

    std::cout << d << " " << e << " " << f;
}