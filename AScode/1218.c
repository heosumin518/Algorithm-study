#include <stdio.h>

int main(void)
{
    int m1, n1, m2, n2;

    scanf("%d %d", &m1, &n1);   // ù��° ����� ���� �Է�

    int matrixA[m1][n1];  // �Է¹��� ����� ũ�⸸ŭ 2���� �迭�� ����

// ù��° ����� ũ�⸸ŭ ���Ҹ� �Է¹���
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);   // �ι�° ����� ���� �Է�
    int matrixB[m2][n2];  // �Է¹��� ����� ũ�⸸ŭ 2���� �迭�� ����

// �ι�° ����� ũ�⸸ŭ ���Ҹ� �Է¹���
    for(int i = 0; i < m2; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int matrixC[m1][n1];    // �� ����� ���� ���� ������ 2���� �迭�� ����

// �� ����� ���� ��� C�� ����
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

// ��� c�� ���
    for (int i = 0; i < sizeof(matrixC) / sizeof(matrixC[0]); i++)    // 2���� �迭�� ���� ũ�⸸ŭ �ݺ�
    {
        for (int j = 0; j < sizeof(matrixC[0]) / sizeof(int); j++)    // 2���� �迭�� ���� ũ�⸸ŭ �ݺ�
        {
            printf("%d ", matrixC[i][j]); // 2���� �迭�� �ε����� �ݺ����� ���� i, j�� ����
        }
        printf("\n");                // ���� ��Ҹ� ����� �� ���� �ٷ� �Ѿ
    }

    return 0;
}