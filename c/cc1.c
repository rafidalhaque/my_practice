#include<stdio.h>

int main(void){
    int A,B,T;
    scanf("%d\n", &T);
    scanf("%d %d", &A, &B);

    int sum = A + B; 
    printf("%d\n", T);
    printf("%d", sum);
    return 0;
}