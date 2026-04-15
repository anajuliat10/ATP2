#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int n = 5;
    int total = contarElementos(n);
    
    printf("Existem %d numeros entre %d e 0.\n", total, n);
    
    return 0;
}