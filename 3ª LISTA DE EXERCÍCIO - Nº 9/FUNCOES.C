#include "FUNCOES.H"

int fatorialIterativo(int n) {
    int resultado = 1;
    for (int i = n; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}

int fatorialRecursivo(int n) {
    if (n <= 1) return 1; 
    return n * fatorialRecursivo(n - 1); 
}