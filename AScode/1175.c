#include <stdio.h>

int main(void)
{
    int m, n, sum = 0;
    scanf("%d %d", &m, &n);

    while(m <= n)
    {
        if(m % 7 == 0){
            sum += m;
        }
        m++;
    }
    printf("%d\n", sum);

    return 0;
}
