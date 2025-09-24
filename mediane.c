#include <stdio.h>

int main() {
    int n, i, j,p;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) scanf("%d", &T[i]);

    // Tri à bulles
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (T[j] > T[j+1]) {
                p = T[j];
                T[j] = T[j+1];
                T[j+1] = p;
            }
        }
    }

    if (n % 2 == 1) {
        printf("Mediane = %d\n", T[n/2]);
    } else {
        printf("Mediane = %.2f\n", (T[n/2 - 1] + T[n/2]) / 2.0);
    }
    return 0;
}