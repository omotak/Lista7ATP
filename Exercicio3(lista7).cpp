#include <stdlib.h>
#include <stdio.h>

//função que verifica se x existe no vetor A
int InVector(int A[], int T, int x) {
    for (int i = 0; i < T; i++) {
        if (A[i] == x) {
            return 1; //existe
        }
    }
    return 0; //não existe
}

int main() {
    int T, x;

    //perguntar o tamanho do vetor
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &T);

    //verifica se o tamanho é válido
    if (T <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    int A[T];

    //ler os elementos do vetor
    printf("Digite %d valores para o vetor A:\n", T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &A[i]);
    }

    //ler o valor a ser buscado
    printf("Digite o valor que deseja buscar:\n");
    scanf("%d", &x);

    //verificar se o elemento está presente
    if (InVector(A, T, x)) {
        printf("O elemento %d esta presente no vetor.\n", x);
    } else {
        printf("O elemento %d nao esta presente no vetor.\n", x);
    }

    return 0;
}
