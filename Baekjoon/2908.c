#include <stdio.h>
int rev(int n)      // 정수를 뒤집는 함수
{
    int tenten, ten, one, tmp;      // 차례로 100의자리수, 10의자리수, 1의자리수, temp
    tenten = n / 100;
    tmp = n % 100;
    ten = tmp / 10;
    one = tmp % 10;
    /*
    각 자리수를 모두 구한다.                     ex) if n = 738, tenten = 7, ten = 3, one = 8
    1의 자리수에 100을 곱한다                    ex) one = 800
    10의 자리수에 10을 곱한다                    ex) ten = 30
    100의 자리수에는 아무것도 곱하지 않는다.     ex) tenten = 7
    위의 과정에서 구한 수들을 모두 더한다.       ex) one + ten + tenten = 800 + 30 + 7 = 837
    */
    return tenten + ten * 10 + one * 100;
}
int main(void)
{
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    n1 = rev(n1);
    n2 = rev(n2);

    if(n1 > n2) printf("%d\n", n1);
    else printf("%d\n", n2);

    return 0;
}