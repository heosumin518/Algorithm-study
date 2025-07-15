#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B;

    bool odd = false;
    while(n--)
    {
        int input;
        cin >> input;

        if (B.empty() || input % 2 != odd)
            B.push_back(input);
        if (input % 2) odd = true;
        else odd = false;
    }

    cout << B.size();
}