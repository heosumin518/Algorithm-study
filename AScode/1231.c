#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--) {
        int a, b;
        int count = 0;
        scanf("%d %d", &a, &b);     // 분자와 분모를 순서대로 입력 받음

        /* 完 1. 주어진 분수를 기약분수로 고친다 */

        //분모를 분자로 나눌 수 있는 경우
        if (b % a == 0) {
            b = b / a;
            a = 1;
        }
        else {
            //분모를 분자보다 작은 수로 나눠본다
            for (int i = a / 2; i > 1; i--)
                if (a % i == 0 && b % i == 0) {
                    a = a / i;
                    b = b / i;
                }
        }

        /* 2. 기약분수의 분모를 소인수분해 */
        for(int i = 2; i <= b; i++)	{	
            
            if (b % i == 0) {		
                b = b / i;

                if ((i != 2) && (i != 5)) {
                count++;
                }	
                i = 1;	
            }	
        }

        if (count == 0) {
            printf("Limited\n");
        }
        else printf("Unlimited\n");

    }

    return 0;
}