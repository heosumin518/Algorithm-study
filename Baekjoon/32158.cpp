#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    string S; cin >> S;

    vector<int> vecP;
    vector<int> vecC;

    char temp;
    for (int i = 0; i < S.size(); i++)
    {
        if (S.at(i) == 'C') vecC.push_back(i);
        else if (S.at(i) == 'P') vecP.push_back(i);
    }
    
    int size = vecP.size() <= vecC.size() ? vecP.size() : vecC.size();
    
    int indexp = -1;
    int indexc = -1;
    for (int i = 0; i < size; i++)
    {
        indexp = vecP.at(i);
        indexc = vecC.at(i);

        temp = S.at(indexp);
        S.at(indexp) = S.at(indexc);
        S.at(indexc) = temp;
    }

    cout << S;
}