#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);
    
    while(testCase--) {
        char text;
        scanf(" %c", &text);
        
        if ((text >= 65) && (text <= 90)) {       // �Էµ� ���ڰ� �빮���� �� 
            text += 32;     // �ҹ��ڷ� ġȯ 
            printf("%c\n", text);
        } 
        else if ((text >= 97) && (text <= 122)) {
            text -= 32;     // �빮�ڷ� ġȯ
            printf("%c\n", text);
        }
    }
    
    return 0;
}