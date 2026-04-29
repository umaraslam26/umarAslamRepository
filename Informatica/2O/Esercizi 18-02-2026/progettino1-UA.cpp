#include <stdio.h>

int main() {
    int g1, m1, a1;
    int g2, m2, a2;

    printf("Inserisci la prima data (gg/mm/aaaa): ");
    scanf("%d/%d/%d", &g1, &m1, &a1);

    printf("Inserisci la seconda data (gg/mm/aaaa): ");
    scanf("%d/%d/%d", &g2, &m2, &a2);

    if (a1 < a2) {
        printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g1, m1, a1, g2, m2, a2);
    } else if (a1 > a2) {
        printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g2, m2, a2, g1, m1, a1);
    } else {
        if (m1 < m2) {
            printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g1, m1, a1, g2, m2, a2);
        } else if (m1 > m2) {
            printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g2, m2, a2, g1, m1, a1);
        } else {
            if (g1 < g2) {
                printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g1, m1, a1, g2, m2, a2);
            } else if (g1 > g2) {
                printf("%02d/%02d/%d viene prima di %02d/%02d/%d\n", g2, m2, a2, g1, m1, a1);
            } else {
                printf("Le due date sono identiche.\n");
            }
        }
    }

    return 0;
}