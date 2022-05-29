#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--) {
        int n;
        int count = 0;

        scanf("%d", &n);

        for(int i = 2; i < n; i++) {
            if(n % i == 0) {            //  한 번이라도 나누어떨어진다면 Not Prime을 출력하고 반복문을 종료
                printf("Not Prime\n");
                count++;
                break;
            }
        }
        if(count == 0) printf("Prime\n");
    }

    return 0;
}
