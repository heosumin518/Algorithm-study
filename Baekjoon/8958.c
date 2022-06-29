#include <stdio.h>

int main(void)
{
    int testCase;
    int count, result;
    char input[80];
    scanf("%d", &testCase);
    while(testCase--) {
        scanf("%s", input);
        result = 0, count = 0;
        for(int i = 0; input[i]; i++) {
            if(input[i] == 'O') {
                count++;
                result += count;
            }
            else count = 0;
        }
        printf("%d\n", result);
    }
    return 0;
}