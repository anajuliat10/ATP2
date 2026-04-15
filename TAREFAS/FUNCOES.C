#include <stdio.h>

    int returnSoma (int A, int B){
        return A + B;
    }

    void resultado (){
        int A;
        int B;
        printf ("Digite o primeiro numero:");
        scanf ("%d", &A);
        printf ("Digite o segundo numero:");
        scanf ("%d", &B);
        printf ("O resultado da soma é: %d",returnSoma (A,B));

    }
