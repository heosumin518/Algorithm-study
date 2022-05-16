#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    printf("%d", (n1 * n2) % (n3 + n4));
}