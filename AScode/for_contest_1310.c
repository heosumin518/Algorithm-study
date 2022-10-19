#include <stdio.h>

int selection(int arr[], int left, int right, int k);

int main(void) {
    int n, q, k;
    int arr[100000] = { 0 };
    int cnt = 0;

    scanf("%d", &n);

    // ������������ ���ĵ� N���� ���ڰ� �Էµȴ�.
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);

    while(q--)
    {
        scanf("%d", &k);
        cnt = selection(arr, 0, n-1, k);
        printf("%d\n", cnt);
    }

    return 0;
}

int selection(int arr[], int left, int right, int k) 
{
    int result = -1;

    while(left <= right)
    {
        int pivot = (left+right)/2;

        if(k == arr[pivot])
        {
            result = pivot;
            right = pivot - 1;
        }

        else if(k < arr[pivot]) 
        {
            right = pivot - 1;
        }
        
        else {
            left = pivot + 1;
        }
    }
    return result;
}
