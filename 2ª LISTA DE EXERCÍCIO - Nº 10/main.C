#include <stdio.h>
#include "FUNCOES.H"

int main() {
    int numero = 10;

    printf("Valor inicial: %d\n", numero);

    dobrar(&numero);     
    
    somarCinco(&numero); 
    printf("Valor final apos as duas: %d\n", numero);

    return 0;
}