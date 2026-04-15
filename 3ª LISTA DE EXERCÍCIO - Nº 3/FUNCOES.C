#include "FUNCOES.H"

long potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * potencia(base, exp - 1);
}