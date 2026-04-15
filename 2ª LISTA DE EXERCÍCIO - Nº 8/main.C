int main() {
    int x = 10;

    procedimentoValor(x); 
    printf("Apos valor: %d\n", x); 

    procedimentoReferencia(&x); 
    printf("Apos referencia: %d\n", x); 
    return 0;
}