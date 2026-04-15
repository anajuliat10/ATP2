int main() {
    int numeroUsuario, triplo;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    triplo = calcularTriplo(numeroUsuario);

    printf("O triplo de %d e %d\n", numeroUsuario, triplo);

    return 0;
}