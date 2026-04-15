#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int meuVetor[3] = {1, 2, 3};
    
    modificarVetor(meuVetor, 3);
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", meuVetor[i]); 
    }
    
    return 0;
}