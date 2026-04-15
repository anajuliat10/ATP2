#include <stdio.h>
#include "FUNCOES.H"

int main() {
    char palavra[] = "Bora";
    
    printf("Antes: %s\n", palavra);
    
    alterarPrimeiroCaractere(palavra, 'F');
    
    printf("Depois: %s\n", palavra); 
    
    return 0;
}