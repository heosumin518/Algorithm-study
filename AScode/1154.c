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
        printf("%d %d %d\n", max, min, max - min);
    }
    return 0;
}