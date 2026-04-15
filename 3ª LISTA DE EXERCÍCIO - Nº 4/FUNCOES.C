#include "FUNCOES.H"

int contarElementos(int n) {
    if (n < 0) {
        return 0;
    }
    return 1 + contarElementos(n - 1);
}