#include <stdio.h>

int main(void)
{
    int testCase;
    int a, b;
    scanf("%d", &testCase);

    while(testCase--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}