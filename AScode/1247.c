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

// �Ʒ� �ڵ�� �迭�� ������ �ڵ�. �迭�� ���̴� ������ �����ϸ� �ȵȴ�. �� ����� ����!

/*

#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);     // �׽�Ʈ ���̽� T�� �Է¹���

    const int SIZE = testCase;

    int a[SIZE];    // ���� ���� a ���� ������ ������ ����

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