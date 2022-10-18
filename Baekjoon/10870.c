#include <stdio.h>

int fibo(int n);

int main(void) {
    int num;
    int result;
    scanf("%d", &num);

    result = fibo(num);
    printf("%d", result);
    return 0;
}

int fibo(int n) {
    if(n==0) return 0;
    else if(n <= 1) return 1;
    return fibo(n-1) + fibo(n-2);
}