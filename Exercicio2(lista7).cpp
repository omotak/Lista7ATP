#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[5], b[5];

    printf("Digite os 5 valores do vetor A\n");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    printf("Digite os 5 valores do vetor B\n");
    scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);

    for (int i = 0; i < 5; i++) {
    printf("[%d, ", a[i]);
    printf("%d] ", b[i]);
    }

    getchar();
    return 0;
}