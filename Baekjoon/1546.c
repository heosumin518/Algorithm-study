#include <stdio.h>

int main(void)
{
    int num;
    double grades[1001] = {0, }, max = 0, avg = 0;
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        scanf("%lf", &grades[i]);

        if(max < grades[i]) max = grades[i];
    }

    for(int i = 0; i < num; i++) {
        grades[i] = grades[i] / max * 100.0;
        avg += grades[i];
    }
    printf("%.2lf", avg / (double)num);

    return 0;
}