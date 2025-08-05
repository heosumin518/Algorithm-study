#include <iostream>
#include <vector>

using namespace std;

// 유클리드 호제법
int GCD(int a, int b)
{
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) cin >> vec[i];

        long long ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ans += GCD(vec[i], vec[j]);
            }
        }

        cout << ans << "\n";
    }
}
