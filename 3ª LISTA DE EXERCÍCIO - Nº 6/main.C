#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int numero = 15;
    
    printf("Antes: %d\n", numero);
    
    dobrarValor(&numero);
    
    printf("Depois: %d\n", numero); 
    
    return 0;
}