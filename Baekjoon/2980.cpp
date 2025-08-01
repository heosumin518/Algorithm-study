#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, L; cin >> N >> L;
    vector<tuple<int, int, int>> vec;
    
    int D, R, G;
    while (N--)
    {
        cin >> D >> R >> G;
        vec.push_back(make_tuple(D, R, G));
    }

    int pos = 0;
    unsigned int time = 0;
    unsigned int index = 0;
    while (pos < L)
    {
        if (index < vec.size() && get<0>(vec.at(index)) == pos)   // 신호등이 있는 곳에 도착했다면
        {
            int tr = get<1>(vec.at(index));
            int tg = get<2>(vec.at(index));

            bool isRedLight = time % (tr+tg) < tr;
            if (!isRedLight)    // 신호등이 초록불일때 위치 업데이트
            {
                pos++;
                index++;
            }
        }
        else    // 신호등이 없는 곳이라면
        {
            pos++;
        }
        time++;
    }

    cout << time;
}
