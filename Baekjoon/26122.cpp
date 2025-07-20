#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K; cin >> K;
    string str; cin >> str;

    vector<int> vec;
    char prev = str[0];
    int cnt = 1;
    for (int i = 0 ; i < K; i++)
    {
        if (str[i] == prev) cnt++;
        else
        {
            vec.push_back(cnt);
            prev = str[i];
            cnt = 1;
        }
    }
    vec.push_back(cnt);

    int ans = 0;
    for (int i = 0; i < vec.size()-1; i++)
    {
        ans = max(ans, min(vec[i], vec[i+1]) * 2);
    }
    cout << ans;
}