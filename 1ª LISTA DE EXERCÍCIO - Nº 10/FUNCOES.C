#include <stdio.h>

    int returnSoma (int A, int B ){
        return A + B;
    }

    int returnMedia (int A, int B){
        return returnSoma(A, B) / 2;
    }

    void maiorValor (int A, int B){
        if (A > B){
            printf ("%d e maior que %d\n", A, B);
        } 
        if (B > A){
           printf ("%d e maior que %d\n", B, A);
        }
        else {
            printf ("os numeros sao iguais");
        }
    }



    void resultado (){
        int A;
        int B;
        printf ("Digite o primeiro numero:");
        scanf ("%d", &A);
        printf ("Digite o segundo numero:");
        scanf ("%d", &B);
        printf ("O resultado da soma e: %d\n",returnSoma (A,B));
        printf ("O resultado da media e: %d\n",returnMedia (A,B));
        maiorValor (A,B);

    }
