#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    int cnt = 0;
    scanf("%[^\n]s",str);
    // fgets(str, sizeof(str), stdin); 
    // gets(str);
    if(str[0]!=' ') cnt++;

    for(int i=1; i<strlen(str); i++)
        if(str[i-1]==' ' && str[i]!=' ') cnt++;

    printf("%d",cnt);
    return 0;
}