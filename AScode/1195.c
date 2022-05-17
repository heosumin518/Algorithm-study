#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n1, n2, n3, n4, n5, n6;
        scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
        if(((n1 + n2 + n3 + n4 + n5 + n6) >= 81) && ((n1 + n2 + n3 + n4 + n5 + n6) <= 180))
        {
            printf("GOOD\n");
        }
        else
        {
            printf("NOT GOOD\n");
        }
    }

    return 0;
}
