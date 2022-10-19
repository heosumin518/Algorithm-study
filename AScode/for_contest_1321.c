#include <stdio.h>

int main(void) {

    int T;
    scanf("%d", &T);
    while(T--) {
        int change;
        int manWon, ohChunWon, chunWon, ohBaekWon, beakWon;
        int tmp;
        scanf("%d", &change);

        manWon = change / 10000;
        tmp = change%10000;
        ohChunWon = tmp / 5000;
        tmp = tmp % 5000;
        chunWon = tmp / 1000;
        tmp = tmp % 1000;
        ohBaekWon = tmp / 500;
        tmp = tmp % 500;
        beakWon = tmp / 100;
        
        printf("%d %d %d %d %d\n", manWon, ohChunWon, chunWon, ohBaekWon, beakWon);
    }

    return 0;
}