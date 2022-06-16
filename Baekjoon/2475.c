#include <stdio.h>

int main(void)
{
    int k100, k10, k, tenten, ten;
    scanf("%d %d %d %d %d", &k100, &k10, &k, &tenten, &ten);
    printf("%d\n", (k100*k100 + k10*k10 + k*k + tenten*tenten + ten*ten) % 10);
    return 0;
}