#include<stdlib.h>
#include<stdio.h>

int main(){

    
    char palavra[20]; //le 19 caracteres, apesar de só precisar do primeiro [0] nesse código.

    printf("Digite uma palavra:\n");
    scanf("%19s", &palavra);

    printf("A palavra %s comeca com %c", palavra, palavra[0]);

    getchar();
    return 0;
}