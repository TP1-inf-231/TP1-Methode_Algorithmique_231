#include <stdio.h>

int multiplication_plus1(int a, int b) {
    if (a <= 0 || b <= 0) {
        printf("Erreur : a et b doivent être > 0\n");
        return -1;
    }
    
    int resultat = 0;
    
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            resultat = resultat + 1;
        }
    }
    
    return resultat;
}

void afficher_calcul_detaille(int a, int b) {
    printf("\nDétail du calcul pour %d × %d :\n", a, b);
    int resultat = 0;
    
    for (int i = 0; i < b; i++) {
        printf("Boucle %d : ", i + 1);
        int avant = resultat;
        
        for (int j = 0; j < a; j++) {
            resultat = resultat + 1;
        }
        
        printf("%d + (%d fois +1) = %d\n", avant, a, resultat);
    }
    
    printf("Résultat final : %d\n", resultat);
}

void tester_multiplication() {
    printf("=== TESTS MULTIPLICATION AVEC +1 ===\n");
    
    printf("Test 1: 3 × 4 = %d\n", multiplication_plus1(3, 4));
    afficher_calcul_detaille(3, 4);
    
    printf("\nTest 2: 5 × 2 = %d\n", multiplication_plus1(5, 2));
    afficher_calcul_detaille(5, 2);
    
    printf("\nTest 3: 7 × 1 = %d\n", multiplication_plus1(7, 1));
    afficher_calcul_detaille(7, 1);
    
    printf("\nTest erreur: -2 × 3 = %d\n", multiplication_plus1(-2, 3));
}
