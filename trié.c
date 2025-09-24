#include <stdio.h>

int main() {
    int n, i, trie = 1;
    printf("Taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) scanf("%d", &T[i]);

    for (i = 0; i < n - 1; i++) {
        if (T[i] > T[i + 1]) {
            trie = 0;
            break;
        }
    }

    if (trie) printf("Tableau trie.\n");
    else printf("Tableau NON trie.\n");
    return 0;
}