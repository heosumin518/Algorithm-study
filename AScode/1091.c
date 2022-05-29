#include <stdio.h>

int main(void)
{
    int n;
    
    scanf("%d", &n);

    do {
        int m;
        int sum = 0;
        int count = 0;

        while(n--) {
            scanf("%d", &m);

            if((m >= 0) && (m <= 100)) {        //올바른 점수는 합산하고 횟수를 카운팅한다.
                sum += m;
                count++;
            }
        }
        double result = (double)sum / count;
        printf("%.2f\n", result);

        scanf("%d", &n);
    } while(n != 0);        //n이 0인 경우 프로그램을 종료한다.

    return 0;
}