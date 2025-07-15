#include <stdio.h>

int main(void)
{
    int n, input;
    int max, min, cnt = 1;
    scanf("%d", &n);
    
    while(n--) {
        scanf("%d", &input);
        if(cnt == 1) {
            cnt++;
            max = input;
            min = input;
        }
        if(input > max) max = input;
        if(input < min) min = input;
    }
    printf("%d %d", min, max);
    return 0;
}