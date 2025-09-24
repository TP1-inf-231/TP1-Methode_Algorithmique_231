#include <stdio.h>

int main() {
    int u1, u2, u3, v1, v2, v3;
    int x, y, z;

    printf("Vecteur U (x y z) : ");
    scanf("%d %d %d", &u1, &u2, &u3);
    printf("Vecteur V (x y z) : ");
    scanf("%d %d %d", &v1, &v2, &v3);

    x = u2*v3 - u3*v2;
    y = u3*v1 - u1*v3;
    z = u1*v2 - u2*v1;

    printf("U x V = (%d, %d, %d)\n", x, y, z);
    return 0;
}