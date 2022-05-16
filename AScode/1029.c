#include <stdio.h>

int main(void)
{
    int secTime;
    int secDay, secHour, secMin, second;
    int temp;

    scanf("%d", &secTime);

    secDay = secTime / 86400;
    temp = secTime % 86400;
    secHour = temp / 3600;
    temp = temp % 3600;
    secMin = temp / 60;
    second = temp % 60;

    printf("%d %d %d %d", secDay, secHour, secMin, second);

    return 0;
}