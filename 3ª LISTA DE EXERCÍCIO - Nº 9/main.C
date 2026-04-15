#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int num = 5;
    
    printf("Iterativo: %d! = %d\n", num, fatorialIterativo(num));
    printf("Recursivo: %d! = %d\n", num, fatorialRecursivo(num));
    
    return 0;
}