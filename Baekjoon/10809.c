#include <stdio.h>

int main(void)
{
    int cmt;
    char s[100];
    scanf("%s", &s);

    for(int i = 97; i <= 122; i++) {
        cmt = 0;
        for(int j = 0; s[j]; j++) {
            if(s[j] == i) {
                printf("%d ", j);
                cmt = 1;
                break;
            }
        }
        if(cmt != 1) printf("-1 ");
    }
    return 0;
}
