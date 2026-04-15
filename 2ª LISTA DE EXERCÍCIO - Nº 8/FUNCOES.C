#include <stdio.h>

void procedimentoValor(int n) {
    n = n * 2; 
}

void procedimentoReferencia(int *n) {
    *n = *n * 2;
}