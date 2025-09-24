# include <stdio.h>
# include <stdlib.h>

int main (void) {
    int A[4][5],B[4][5],C[4][5];
    int i ,j;
//saisir les element de la matrice A  ;
    printf("entrer les elements de la matrice A \n") ;
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
            /* code */
        }
           /* code */
    }
    // entrer pour B;
    printf("entrer les elements de la matrice B \n") ;
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++)
        {
            printf("B[%d][%d]=",i,j);// pour aider l'utilisateur
            scanf("%d",&B[i][j]);
            /* code */
        }
        /* code */
    }
    //calcul de la somme ;
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++)
            C[i][j] = A[i][j]+B[i][j];
    }
    // afficher la somme :
    printf(" A =\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("B =\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
            printf("%d\t",B[i][j]);
        printf("\n");
    }
    printf(" A + B =\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++)
            {
             printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

