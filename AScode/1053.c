#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        for(int i = 0; i < y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}