#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int meuVetor[] = {5, 15, 25, 35, 45};
    int tamanho = 5;

    printf("Vetor ANTES da modificacao: ");
    imprimirVetor(meuVetor, tamanho);

    modificarVetor(meuVetor, tamanho);

    printf("Vetor DEPOIS da modificacao: ");
    imprimirVetor(meuVetor, tamanho);

    return 0;
}