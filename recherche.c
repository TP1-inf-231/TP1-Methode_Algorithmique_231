#include <stdio.h>

int main() {
    int n, i, x;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) scanf("%d", &T[i]);

    printf("Valeur a rechercher : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (T[i] == x) {
            printf("Trouve en position %d\n", i+1);
            break ;
        }
        else{
            printf("Valeur non trouvee.\n");
        } 
    }     
    
    return 0;
}