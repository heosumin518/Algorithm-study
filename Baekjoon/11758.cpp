/*

CCW(Counter Clock Wise)
문제링크: https://www.acmicpc.net/problem/11758
참고사이트: https://gaussian37.github.io/math-algorithm-ccw/

*/ 

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x1, x2, y1, y2, x3, y3;
    int cross_product = 0;
    int result = -1;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    cross_product = (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1);

    if (cross_product > 0)
        result = 1;
    else if (cross_product < 0)
        result = -1;
    else if (cross_product == 0)
        result = 0;
        
    cout << result << endl;

    return 0;
}