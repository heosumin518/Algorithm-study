#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S, P;
    cin >> S >> P;
    const char* ptr = strstr(S.c_str(), P.c_str());
    
    if (ptr != nullptr) cout << 1;
    else cout << 0;
}