#include <stdio.h>

int main(void)
{
    int monNum, tueNum, wedNum, thuNum, friNum, satNum, sunNum;
    scanf("%d %d %d %d %d %d %d", &monNum, &tueNum, &wedNum, &thuNum, &friNum, &satNum, &sunNum);
    printf("%.2f", (monNum + tueNum + wedNum + thuNum + friNum + satNum + sunNum) / 7.0);
    return 0;
}