#include <stdio.h>

int main(void)
{
    int testCase;
    scanf("%d", &testCase);

    while(testCase--) {
        int a, b;
        int count = 0;
        scanf("%d %d", &a, &b);     // ���ڿ� �и� ������� �Է� ����

        /* �� 1. �־��� �м��� ���м��� ��ģ�� */

        //�и� ���ڷ� ���� �� �ִ� ���
        if (b % a == 0) {
            b = b / a;
            a = 1;
        }
        else {
            //�и� ���ں��� ���� ���� ��������
            for (int i = a / 2; i > 1; i--)
                if (a % i == 0 && b % i == 0) {
                    a = a / i;
                    b = b / i;
                }
        }

        /* 2. ���м��� �и� ���μ����� */
        for(int i = 2; i <= b; i++)	{	
            
            if (b % i == 0) {		
                b = b / i;

                if ((i != 2) && (i != 5)) {
                count++;
                }	
                i = 1;	
            }	
        }

        if (count == 0) {
            printf("Limited\n");
        }
        else printf("Unlimited\n");

    }

    return 0;
}