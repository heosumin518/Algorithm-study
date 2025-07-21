#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;  // 챕터 수
    cin >> N;

    int time = 30; // 공부 시간
    int ti;
    unsigned int cnt = 0;   // 절반 이상 공부한 챕터 수
    for (int i = 0; i < N; i++)
    {
        cin >> ti;
        
        if (time > ti || time >= ti / 2.0) cnt++;
        time -= ti;

        if (time <= 0) time = 30;   // 공부 시간 리셋
    }

    cout << cnt;
}