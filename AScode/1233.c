#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--) {
        int n;
        int count = 0;

        scanf("%d", &n);

        for(int i = 2; i < n; i++) {
            if(n % i == 0) {            //  �� ���̶� ����������ٸ� Not Prime�� ����ϰ� �ݺ����� ����
                printf("Not Prime\n");
                count++;
                break;
            }
        }
        if(count == 0) printf("Prime\n");
    }

    return 0;
}
