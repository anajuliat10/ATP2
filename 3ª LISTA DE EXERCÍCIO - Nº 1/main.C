#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int num = 5;
    int resultado = calcularFatorial(num);
    
    printf("O fatorial de %d e %d\n", num, resultado);
    
    return 0;
}