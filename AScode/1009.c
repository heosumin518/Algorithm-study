#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);
    
    while(testCase--) {
        char text;
        scanf(" %c", &text);
        
        if ((text >= 65) && (text <= 90)) {       // 입력된 문자가 대문자일 때 
            text += 32;     // 소문자로 치환 
            printf("%c\n", text);
        } 
        else if ((text >= 97) && (text <= 122)) {
            text -= 32;     // 대문자로 치환
            printf("%c\n", text);
        }
    }
    
    return 0;
}