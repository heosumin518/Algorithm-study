#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = ((b * b) - (4 * a * c)) > 0;
    printf("%d", result);
    return 0;
}