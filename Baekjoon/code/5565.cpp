#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    int totalPrice = 0;
    int books[9];

    cin >> totalPrice;
    for (int i = 0; i < 9; i++)
    {
        cin >> books[i];
        sum += books[i];
    }

    cout << totalPrice - sum;
}