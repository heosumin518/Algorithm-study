#include <stdio.h>

int main(void)
{
    int price, krw500, krw100, krw10;
    int tmp;
    scanf("%d", &price);
    krw500 = price / 500;
    tmp = price % 500;
    krw100 = tmp / 100;
    tmp = tmp % 100;
    krw10 = tmp / 10;
    printf("%d\n%d\n%d", krw500, krw100, krw10);
}