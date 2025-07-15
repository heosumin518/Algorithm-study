#include <stdio.h>

int main(void)
{
    int cMajor, cnt = 0;
    int input[9] = {0, };

    for(int i = 0; i < 8; i++) {
        scanf("%d", &input[i]);
    }

    for(int i = 0; i < 8; i++) {
        if(i+1 == input[i]) cnt++;
        else break;
    }
    if(cnt == 8) {
        printf("ascending");
        return 0;
    }

    cnt = 0;
    for(int i = 8; i > 0; i--) {
        if(i == input[8-i]) cnt++;
    }

    if(cnt == 8) {
        printf("descending");
        return 0;
    }

    printf("mixed");

    return 0;
}