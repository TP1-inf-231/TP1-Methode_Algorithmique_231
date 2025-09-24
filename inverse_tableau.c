#include <stdio.h>

int main() {
    int n, i;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) scanf("%d", &T[i]);

    printf("Tableau inverse :\n");
     for (i = n-1; i >= 0 ; i--) {
         printf("%d ", T[i]);
         printf("\n");
    }
    return 0;
}