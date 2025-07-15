#include <stdio.h>

int main(void)
{
    int testCase, repeat;
    char input[21];
    scanf("%d", &testCase);
    while(testCase--) {
        scanf("%d %s", &repeat, input);
        for(int i = 0; input[i]; i++) {
            for(int j = 0; j < repeat; j++) {
                printf("%c", input[i]);
            }
        }
        printf("\n");
    }
    return 0;
}