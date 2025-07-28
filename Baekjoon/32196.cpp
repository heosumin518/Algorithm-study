#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    long long K, X, Y; 
    cin >> N >> M >> K >> X >> Y;

    vector<long long> vec;
    long long ai, bi;
    for (int i = 0; i < N; i++)
    {
        cin >> ai >> bi;
        vec.push_back(bi * Y - ai * X );
    }

    // 모든 열차의 운행 시간.
    long long ans = K * (X + Y);
    sort(vec.rbegin(), vec.rend());

    for (int i = 0; i < M; i++)
    {
        ans -= vec.at(i);
    }

    cout << ans;
}