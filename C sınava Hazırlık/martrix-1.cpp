#include <stdio.h>

main(){

    int i, j, A[3][3], B[3][3];

    printf("ilk matrisi giriniz :\n");

    for (i = 0; i < 3; i++)

        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);

    printf("ikinci matrisi giriniz :\n");

    for (i = 0; i < 3; i++)

        scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);

    printf("iki matrisin toplami :");

    for (i = 0; i < 3; i++){

        printf("\n");

        for (j = 0; j < 3; j++)

            printf("%8d", A[i][j] + B[i][j]);

    }
    

}
