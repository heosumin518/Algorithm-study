#include <stdio.h>
#include <stdlib.h>

/*
    작업 스케줄링 - 그리디 알고리즘
*/

// 작업을 나타내는 구조체
typedef struct Task {
    int start;
    int end;
} Task;

// 작업을 시작시간 순으로 오름차순 정렬하기 위해 필요한 함수
int compare(const void* a, const void* b)
{
    Task* temp1 = (Task*)a;
    Task* temp2 = (Task*)b;
    
    if(temp1->end > temp2->end)
        return 1;
    else if(temp1->end == temp2->end)
    {
        if(temp1->start > temp2->start)
            return 1;
        else
            return -1;
    }
    else
        return -1;
}


int scheduling(Task arr[], int n) {
    int mach1 = 0, mach2 = 0, mach3 = 0;
    int tmp;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(mach1 <= arr[i].start)
        {
            mach1 = arr[i].end;
            cnt++;
        }
        else if(mach2 <= arr[i].start)
        {
            mach2 = arr[i].end;
            cnt++;
        }
        else if(mach3 <= arr[i].start)
        {
            mach3 = arr[i].end;
            cnt++;
        }
    }
    
    return cnt;
}


int main(void) {

    int row, column = 2;
    int result = 0;

    scanf("%d", &row);

    Task *pTask;
    pTask = (Task*)malloc(sizeof(Task)*row);

    // 작업의 정보를 n개 만큼 입력받는다.
    for(int i = 0; i < row; i++)
    {
        scanf("%d %d", &pTask[i].start, &pTask[i].end);
    }

    // 작업시간 기준 오름차순으로 정렬
    qsort(pTask, row, sizeof(Task), compare);

    // 작업을 배치
    result = scheduling(pTask, row);

    printf("%d\n", result);

    free(pTask);

    return 0;
}