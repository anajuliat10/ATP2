#include "FUNCOES.H"

int somaRecursiva(int n) {
    
    if (n <= 1) {
        return 1;
    }
    
    return n + somaRecursiva(n - 1);
}