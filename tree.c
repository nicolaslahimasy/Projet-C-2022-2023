//
// Created by nico9 on 13/11/2022.
//
#include "tree.h"
#include "node.h"
#include <string.h>

// Créer la racine de l'arbre
t_tree Create_Tree()
{
    t_tree myTree;
    myTree.root = createNode('0');
    return myTree;
}

void ReadFile(FILE *myfile){
        char line[1000];
        while (fgets(line, 1000, myfile) != NULL) {
            char *col1 = strtok(line, "\t");
            printf(" RA : %s\t| ", col1);
            char *col2 = strtok(NULL, "\t");
            printf(" FDB : %s\t| ", col2);
            char *col3 = strtok(NULL, "\t");
            printf(" FF : %s\t\n ", col3);
            }
                p_tree myTree;
                p_letter_node tmp = NULL;
                tmp = myTree->root; //On se met sur la racine de l'arbre




}

// Création des arbres pour chaque forme
//t_tree NomTree = Create_Tree();
//t_tree AdjTree = Create_Tree();
//t_tree VerbeTree = Create_Tree();
//t_tree AdvTree = Create_Tree();


// Découper chaque ligne du fichier en utilisant les fonctions strcpy et strtok
// Récuperer les informations du fichier dictionnaire et les stocker dans des variables qui serviront à remplir l'arbre

// Faire une fonction qui extrait un mot au hasard dans le fichier dictionnaire en parcourant l'arbre
// avec la fonction rand

