#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int numero = 10;
    
    printf("Valor antes: %d\n", numero);
    alterarComPonteiro(&numero);
    
    printf("Valor depois: %d\n", numero);
    
    return 0;
}