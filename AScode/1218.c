#include <stdio.h>

int main(void)
{
    int m1, n1, m2, n2;

    scanf("%d %d", &m1, &n1);   // 첫번째 행렬의 정보 입력

    int matrixA[m1][n1];  // 입력받은 행렬의 크기만큼 2차원 배열을 생성

// 첫번째 행렬의 크기만큼 원소를 입력받음
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);   // 두번째 행렬의 정보 입력
    int matrixB[m2][n2];  // 입력받은 행렬의 크기만큼 2차원 배열을 생성

// 두번째 행렬의 크기만큼 원소를 입력받음
    for(int i = 0; i < m2; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int matrixC[m1][n1];    // 두 행렬의 합의 값을 저장할 2차원 배열을 생성

// 두 행렬의 합을 행렬 C에 저장
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

// 행렬 c를 출력
    for (int i = 0; i < sizeof(matrixC) / sizeof(matrixC[0]); i++)    // 2차원 배열의 세로 크기만큼 반복
    {
        for (int j = 0; j < sizeof(matrixC[0]) / sizeof(int); j++)    // 2차원 배열의 가로 크기만큼 반복
        {
            printf("%d ", matrixC[i][j]); // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
        }
        printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
    }

    return 0;
}