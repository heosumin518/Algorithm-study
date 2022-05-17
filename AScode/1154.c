#include <stdio.h>

int main(void)
{
    int testCase;
    int min, max;
    scanf("%d", &testCase);
    while(testCase--)       // 테스트 케이스 T를 입력받는다
    {
        int m, count = 1;
        scanf("%d", &m);

        while(m--)      // m개의 정수를 입력받는다.
        {
            int n;
            scanf("%d", &n);

            if(count == 1)      // 첫 실행시 최소값과 최대값은 n 으로 설정
            {
                min = n;
                max = n;
                count--;
            }

            if(n >= max)
            {
                max = n;
            }
            if(n <= min)
            {
                min = n;
            }
        }
        printf("%d %d %d\n", max, min, max - min);
    }
    return 0;
}