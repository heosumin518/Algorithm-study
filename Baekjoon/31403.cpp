#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    string ab;
    ab += to_string(a);
    ab += to_string(b);

    cout << a + b - c << '\n';
    cout << stoi(ab) - c;
}