#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
#include "node.h"
#include <stdbool.h>

int main() {
    int x;
    char mot[100];
    bool exit;
    exit = false;

    do {
        printf("Bienvenue dans le programme ! Que voulez-vous faire ?\n");// Les 4 fonctionnalités principales
        printf("\n1 - Afficher les mots du fichier \n2 - Rechercher un mot dans le fichier\n3 - Generer des phrases aleatoires\n4 - Sortir du programme\n");
        do {
            printf("\nSaisissez votre choix : \n");
            scanf("%d", &x);
        } while (x < 1 || x > 4);
        if (x == 1) {
            FILE *dictionnaryFile = fopen("C:\\Users\\nico9\\CLionProjects\\Projet C L2\\dico.txt", "r");
            if (dictionnaryFile == NULL) {
                printf("Impossible d'ouvrir le fichier dico.txt");
            } else {
                printf("Le fichier est ouvert \n");
                t_tree Mytree;
                ReadFileAndFillTree(dictionnaryFile);
            }
        } else {
            if (x == 2) {
                printf("Saisissez le mot que vous voulez chercher : \n");
                scanf("%s", &mot);
                printf("Vous cherchez le mot : %s\n" ,&mot);
            } else {
                if (x == 3) {
                    printf("NULL \n");
                }else{
                    if (x==4){
                        printf("Sortie de programme.");
                        exit = true;
                    }
                }
            }
        }
    }while (exit == false);

}
