
#include <stdio.h>

int main() {
    int tableau[2][10];
    int i;

    // Remplissage du tableau
    for (i = 0; i < 10; i++) {
        tableau[0][i] = i;          // 1ère ligne : 0 à 9   
        tableau[1][i] = i * 3;     // 2ème ligne : triple des valeurs
    }

    // Affichage du tableau
    printf("Ligne 1 : "); 
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[0][i]);  
    }

    printf("\nLigne 2 : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[1][i]);
    }  

    return 0;
} 