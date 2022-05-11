#include <stdio.h>

int main(void)
{
    double speed, distanceDriven;
    scanf("%lf %lf", &speed, &distanceDriven);
    printf("%.3f %.3f %.2f", speed, distanceDriven, speed * distanceDriven);
}