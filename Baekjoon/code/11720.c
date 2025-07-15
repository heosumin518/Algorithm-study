#include <stdio.h>

int main(void)
{
    int n;
    int num, sum = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%1d", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}