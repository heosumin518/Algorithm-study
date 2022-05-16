#include <stdio.h>

int main(void)
{
    int testCase, a;
    scanf("%d", &testCase);
    while(testCase--)
    {
        scanf("%d", &a);

        if((a % 3 == 0 || (a % 10 == 3) || (a / 10 == 3)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

// 아래 코드는 배열로 구현한 코드. 배열의 길이는 변수로 설정하면 안된다. 꼭 상수로 설정!

/*

#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);     // 테스트 케이스 T를 입력받음

    const int SIZE = testCase;

    int a[SIZE];    // 양의 정수 a 들을 저장할 변수를 선언

    for(int i = 0; i < SIZE; i++)
    {
        const int HI = i;
        scanf("%d", &a[HI]);
    }

    for(int i = 0; i < SIZE; i++)
    {
        if((a[i] % 3 == 0 || (a[i] % 10 == 3) || (a[i] / 10 == 3)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

*/