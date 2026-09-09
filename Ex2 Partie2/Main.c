#include <stdio.h>

int main() {
    int tableau[2][10];
    int i = 0;

    // Remplissage du tableau avec while
    while (i < 10) {
        tableau[0][i] = i;          // 1ère ligne : 0 à 9
        tableau[1][i] = i * 3;     // 2ème ligne : triple des valeurs
        i++;
    }

    // Affichage du tableau
    printf("Ligne 1 : ");
    i = 0;
    while (i < 10) {
        printf("%d ", tableau[0][i]);
        i++;
    }

    printf("\nLigne 2 : ");
    i = 0;
    while (i < 10) {
        printf("%d ", tableau[1][i]);
        i++;
    }

    return 0;
}