#include <stdio.h>


int facto(int num) {

    if(num <= 1) return 1;

    return num * facto(num -1);
}

int main(void) {

    int num;
    int result;
    scanf("%d", &num);

    result = facto(num);
    printf("%d\n", result);

    return 0;
}