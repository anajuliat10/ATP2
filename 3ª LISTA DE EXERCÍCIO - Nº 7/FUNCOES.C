#include "FUNCOES.H"

void modificarVetor(int *v, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
    
        *(v + i) = *(v + i) * 10; 
    }
}