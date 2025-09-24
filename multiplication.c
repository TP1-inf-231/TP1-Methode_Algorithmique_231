# include <stdio.h>
# include <stdlib.h>
int main ()
{
    int A[2][3],B[2][3],C[2][3];
    int i ,j ;
// remplissage
printf("entrer les elements de la matrice A\n");
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 3; j++)
    {
       printf("A[%d][%d]=",i,j);
       scanf("%d",&A[i][j]);
    }
}
printf("entrer les elements de la matrice B\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("B[%d][%d]=",i,j);
           scanf("%d",&B[i][j]);
        }
    }  
// calcul du produit :
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 3; j++)
    {
       C[i][j] = A[i][j]*B[i][j];
    }
} 
// affichage des matrices A,B et C printf("A x B= \n");printf("B= \n");
printf("A= \n");
for ( i = 0; i < 2; i++)
{
     for ( j = 0; j < 3; j++)
        printf("%d\t",A[i][j]);  
     printf("\n");
} 
 // cas de A
printf("B= \n");
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 3; j++)
       printf("%d\t",B[i][j]);  
    printf("\n");
}  
 // cas de B
printf("A x B= \n");
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 3; j++)
       printf("%d\t",C[i][j]);  
    printf("\n");
}  
   return 0;
}
