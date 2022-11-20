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


// Fonction qui permet de récuperer les informations du fichier et les séparer
void ReadFileAndFillTree(FILE *myfile) {
    char line[1000];
    while (fgets(line, 1000, myfile) != NULL) {
        char *rad = strtok(line, "\t");
        printf(" RA : %s\t| ", rad); // Radical
        char *base = strtok(NULL, "\t");
        printf(" FDB : %s\t| ", base); // FDB : Forme de base
        char *flech = strtok(NULL, "\t");
        printf(" FF : %s\t\n ", flech); // FF : Forme Fléchie

        // Cette partie du code ne marche pas vraiment ... //

        /*p_tree myTree;
        p_letter_node temp = NULL;
        temp = myTree->root; //On se met sur la racine de l'arbre, temp va nous permettre de parcourir les listes et donc de remplir l'arbre
        for (int i = 0; i < (int) strlen(base); i++) {
            p_cell ptr_cell = NULL;
            ptr_cell = temp->sons->head;// On se place sur la tête de la liste
            while (ptr_cell != NULL) {
                if (base[i] == ptr_cell->son->letter) {
                    temp = ptr_cell->son;// On assigne a temp la valeur du fils de la cellule
                } else {
                    ptr_cell = ptr_cell->next;
                }
            }
            p_cell mycell = createCell(base[i]);
            if (temp->sons->head == NULL) {
                temp->sons->head = mycell;// On assigne temp à la tête de la liste des fils si la tête de la liste est nulle
                temp->cpt += 1;
            } else {
                p_cell tmp_cell = temp->sons->head;
                while (tmp_cell->next != NULL) {// Si la liste n'est pas nulle, on la parcourt jusqu'à trouver une cellule vide
                    tmp_cell = tmp_cell->next;
                }
                tmp_cell->next = mycell;
                temp->cpt += 1;//On ajoute 1 à la valeur comptant les formes fléchies
            }
            temp = mycell->son;
        }
        if (temp->arrowedform->head == NULL) {
            temp->arrowedform->head = createWordCell();// On crée une cellule à la tête de la liste des formes fléchies si la liste est nulle
        } else {
            p_word_cell tmp_cell = temp->arrowedform->head;
            while (tmp_cell->next != NULL) {
                tmp_cell = tmp_cell->next;
            }
            tmp_cell->next = createWordCell();// Si la liste n'est pas nulle on la parcourt puis on insère une cellule en fin de liste
        }*/
    }
}


