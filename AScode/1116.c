#include <stdio.h>

int main(void)
{
    int testCase;
    int min, max;
    scanf("%d", &testCase);
    while(testCase--)       // �׽�Ʈ ���̽� T�� �Է¹޴´�
    {
        int m, count = 1;
        scanf("%d", &m);

        while(m--)      // m���� ������ �Է¹޴´�.
        {
            int n;
            scanf("%d", &n);

            if(count == 1)      // ù ����� �ּҰ��� �ִ밪�� n ���� ����
            {
                min = n;
                max = n;
                count--;
            }

            if(n >= max)
            {
                max = n;
            }
            if(n <= min)
            {
                min = n;
            }
        }

        if((max < 0) || (min < 0))
        {
            printf("HMM!\n");
        }
        else if((max + min) == 0)
        {
            printf("ZERO\n");
        }
        else if((max + min) % 7 == 0)
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