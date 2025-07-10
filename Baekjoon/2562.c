#include <stdio.h>

int main(void)
{
    int n[10];
    int max, cnt = 0;
    for(int i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
    }
    for(int i = 0; n[i]; i++) {
        if(cnt == 0) {
            max = n[i];
            cnt++;
        }
        if(n[i] > max) max = n[i];
    }
    for(int i = 0; n[i]; i++) {
        if(n[i] == max) break;
        cnt++;
    }
    printf("%d\n%d", max, cnt);
    return 0;
}