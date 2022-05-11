#include <stdio.h>
 
int main(void)
{
    int n1, n2, n3, n4, n5, n6;
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
    printf("%.4f", (n1 + n2 + n3 + n4 + n5 + n6) / 6.0);
    return 0;
}