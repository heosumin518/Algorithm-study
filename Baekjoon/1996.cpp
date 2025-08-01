#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    char** arr = new char*[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new char[N]();
        memset(arr[i], '0', N);
    }
    
    // 상, 하, 좌, 우, 대각선
    int dx[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
    int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };

    char input;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> input;
            if (input != '.')
            {
                arr[i][j] = '*';
                for (int k = 0; k < 8; k++) // 인접한 8칸 검사 및 연산
                {
                    int ny = i + dy[k];
                    int nx = j + dx[k];

                    if (ny >= 0 && nx >= 0 && ny < N && nx < N) // 범위 제한
                    {
                        if (arr[ny][nx] == '*') continue;   // 폭탄이 서로 붙어있을 경우
                        if (input - '0' >= 10)
                            arr[ny][nx] = 'M';
                        else
                            arr[ny][nx] += input - '0';
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] - '0' >= 10)
                cout << 'M';
            else
                cout << arr[i][j];
        }
        cout << '\n';
    }
}