#include <stdio.h>

int main(void)
{
    int n;
    
    scanf("%d", &n);

    do {
        int m;
        int sum = 0;
        int count = 0;

        while(n--) {
            scanf("%d", &m);

            if((m >= 0) && (m <= 100)) {        //�ùٸ� ������ �ջ��ϰ� Ƚ���� ī�����Ѵ�.
                sum += m;
                count++;
            }
        }
        double result = (double)sum / count;
        printf("%.2f\n", result);

        scanf("%d", &n);
    } while(n != 0);        //n�� 0�� ��� ���α׷��� �����Ѵ�.

    return 0;
}