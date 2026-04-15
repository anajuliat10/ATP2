#include <stdio.h>
#include "FUNCOES.H"

void modificarVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
    
        *(vet + i) = *(vet + i) + 10;
    }
}

void imprimirVetor(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(vet + i));
    }
    printf("\n");
}