#include <stdio.h>

int main(void)
{
    int testCase, m, n;
    scanf("%d", &testCase);
    
    while(testCase--)
    {
        int jin_yaksu = 0;
        int i, j;

        scanf("%d %d", &m, &n);

        for(i = m; i <= n; i++)
        {
            int sum = 1;

            if(i == 1) 
            {
                jin_yaksu++;
                continue;
            }
            for(j = 2; j < i; j++)
            {
                if(i % j == 0) 
                {
                    sum += j;
                }
                continue;
            } 
            if(sum < i) jin_yaksu++;
        }

        printf("%d\n", jin_yaksu);
    }
    return 0;
}