#include <stdio.h>

int main(void)
{
    int price;
    
    scanf("%d", &price);
    do {
        int count = 0;
        int money = 5000;

        while(price > 0) {
            price -= money;
            money += 100;
            count++;
        }
        printf("%d\n", count);

        scanf("%d", &price);
    } while(price != 0);

    return 0;
}