#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  const int TAILLE_STRING = 100;
  char nom[TAILLE_STRING];
  char prenom[TAILLE_STRING];
  char date[TAILLE_STRING];
  char nationalite[TAILLE_STRING];
  char yeux[TAILLE_STRING];

// Lecture saisie utilisateur

  printf("\nVeuillez nous fournir les informations suivantes:\n\n");

  printf("\tNom: ");
  scanf("%s",nom);
  printf("\n");

  printf("\tPrénom: ");
  scanf("%s",prenom);
  printf("\n");

  printf("\tDate de naissance jj/ma/aaaa: ");
  scanf("%s",date);
  printf("\n");

  printf("\tNationalité: ");
  scanf("%s",nationalite);
  printf("\n");

  printf("\tCouleur des yeux: ");
  scanf("%s",yeux);
  printf("\n");

// Affichage des informations  

  printf("Vous vous appelez %s %s, vous êtes née le %s, vous êtes de nationalité %s et vos yeux sont %s.", prenom, nom, date, nationalite, yeux);
  
  return 0;
}
