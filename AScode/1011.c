#include <stdio.h>
 
int main(void)
{
    double base, hiht;
    scanf("%lf %lf", &base, &hiht);   
    printf("%.6f, %.6f, %.6f", base, hiht, base * hiht / 2);
    return 0;
}