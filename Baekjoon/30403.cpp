#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    string str; cin >> str;

    char lower[7] = { 'r', 'o', 'y', 'g', 'b', 'i', 'v' };
    char upper[7] = { 'R', 'O', 'Y', 'G', 'B', 'I', 'V' };

    int lowerCnt = 0;
    int  upperCnt = 0;

    for (int i = 0; i < 7; i++)
    {
        if (str.find(lower[i]) != std::string::npos) lowerCnt++;
        if (str.find(upper[i]) != std::string::npos) upperCnt++;
    }

    if (lowerCnt >= 7 && upperCnt >= 7) cout <<"YeS";
    else if (lowerCnt >= 7) cout << "yes";
    else if (upperCnt >= 7) cout << "YES";
    else cout << "NO!";
}