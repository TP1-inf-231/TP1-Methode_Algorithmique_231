#include <stdio.h>

int main() {
    int n, p, i, j;
    printf("Taille du vecteur (n) : ");
    scanf("%d", &n);
    printf("Nombre de colonnes de la matrice (p) : ");
    scanf("%d", &p);

    int V[n], M[n][p], R[p];

    printf("Vecteur V :\n");
    for (i = 0; i < n; i++) scanf("%d", &V[i]);

    printf("Matrice M :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) scanf("%d", &M[i][j]);
    }

    for (j = 0; j < p; j++) {
        R[j] = 0;
        for (i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    printf("Resultat V x M = \n");
    for (j = 0; j < p; j++) printf("%d ", R[j]);
    printf("\n");
    return 0;
}
