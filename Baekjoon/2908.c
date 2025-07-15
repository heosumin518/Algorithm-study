#include <stdio.h>
int rev(int n)      // ������ ������ �Լ�
{
    int tenten, ten, one, tmp;      // ���ʷ� 100���ڸ���, 10���ڸ���, 1���ڸ���, temp
    tenten = n / 100;
    tmp = n % 100;
    ten = tmp / 10;
    one = tmp % 10;
    /*
    �� �ڸ����� ��� ���Ѵ�.                     ex) if n = 738, tenten = 7, ten = 3, one = 8
    1�� �ڸ����� 100�� ���Ѵ�                    ex) one = 800
    10�� �ڸ����� 10�� ���Ѵ�                    ex) ten = 30
    100�� �ڸ������� �ƹ��͵� ������ �ʴ´�.     ex) tenten = 7
    ���� �������� ���� ������ ��� ���Ѵ�.       ex) one + ten + tenten = 800 + 30 + 7 = 837
    */
    return tenten + ten * 10 + one * 100;
}
int main(void)
{
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    n1 = rev(n1);
    n2 = rev(n2);

    if(n1 > n2) printf("%d\n", n1);
    else printf("%d\n", n2);

    return 0;
}