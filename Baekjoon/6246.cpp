#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> vec(N);

    unsigned int cnt = 0;
    int L, I;   // l번 슬롯부터 i개씩 띄어서 풍선을 놓는다.
    while (Q--)
    {
        cin >> L >> I;

        for (int i = L-1; i < vec.size(); i += I)
        {
            if (vec.at(i) == 0)
            {
                vec.at(i) = 1;
                cnt++;
            }
        }
    }
    cout << vec.size() - cnt;
}
