#include <stdio.h>
#include <string.h>

int count;

int recursion(const char *s, int l, int r){
    count++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;
    char str[1005];
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        count = 0;
        scanf("%s", str);

        printf("%d", isPalindrome(str));
        printf(" %d\n", count);
    }
}