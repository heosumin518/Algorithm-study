#include <stdio.h>

int main(void)
{
    int a, b, c;
    int count;
    char result[100] = {0};

    scanf("%d %d %d", &a, &b, &c);
    sprintf(result, "%d", a*b*c);

    for(int i = 0; i <= 9; i++) {
        count = 0;
        for(int j = 0; result[j]; j++) {
            if(result[j]-'0' == i) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}