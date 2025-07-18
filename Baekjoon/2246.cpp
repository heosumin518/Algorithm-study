#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> c(N);
    int D, C;   // 거리, 숙박비
    for (int i = 0; i < N; i++)
    {
        cin >> D >> C;
        c.at(i) = { D, C };
    }

    int cnt = 0;
    bool result = false;
    for (int i = 0; i < N; i++)
    {
        result = true;
        for (int j = 0; j < N; j++)
        {
            if (j == i) continue;

            if (c[i].first >= c[j].first && c[i].second >= c[j].second)
            {
                result = false;
                break;
            }
        }
        if (result == true) cnt++;
    }
    
    cout << cnt;
}