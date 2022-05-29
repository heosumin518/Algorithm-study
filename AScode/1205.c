#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--)
    {
        int min, max;
        int m, n;
        int count = 1;

        scanf("%d", &m);

        while(m--)
        {
            scanf("%d", &n);

            if(count == 1)
            {
                min = n;
                max = n;
                count--;
            }
            if(n >= max) max = n;
            if(n <= min) min = n;
        }

        if((max - min != 0) && (min % (max - min) == 0) && (max % (max - min) == 0)) printf("YES\n");
        else printf("NO\n");

    }


    return 0;
}