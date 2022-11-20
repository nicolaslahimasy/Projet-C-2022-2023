//
// Created by nico9 on 13/11/2022.
//
#include "node.h"
#include "string.h"
#include "tree.h"
#include <stdlib.h>
#include <stdbool.h>

// Permet de retourner l'arbre si le noeud est vide
bool isEmptyNode(t_tree *mytree)
{
    if (mytree->root == NULL)
    {
        return mytree = false;
    }
    return mytree;
}

// Fonction qui permet de créer une cellule
p_cell createCell(char letter){
    p_letter_node myNode = createNode(letter);
    p_cell myCell =  malloc(sizeof(t_cell));
    myCell->son = myNode;
    myCell->next = NULL;
    return myCell;
}

// Créer une cellule pour un mot
p_word_cell createWordCell(){
    p_word_cell myCell =  malloc(sizeof(t_word_cell));
    p_word myWord = malloc(sizeof(t_word));
    myWord->arrowed = calloc(40,sizeof(char));
    myWord->form = calloc(40,sizeof(char));
    myCell->son = myWord;
    myCell->next = NULL;
    return myCell;
}

// Créer une liste vide
t_std_list * t_EmptyList()
{
    t_std_list * EmptyList =  (malloc(sizeof(t_std_list)));
    EmptyList->head = NULL;
    return EmptyList;
};


// Créer un noeud pour une lettre grâce à l'allocation dynamique
p_letter_node createNode(char letter) // Créer un noeud pour une lettre
{
    p_letter_node LetterNode = malloc(sizeof(t_letter_node));
    LetterNode->letter = letter;
    LetterNode->sons = t_EmptyList();
    return LetterNode;
}


// Fonction qui permet de chercher un mot
p_node searchWORD(t_tree t, char letter){
    p_node current = t.root;
    while (current != NULL) {
        if (current->value == letter) {
            return current;
        }
        else if (current->value > letter) {
            current = current->left;
        }
        else {
            current = current->right;
        }
    }
    return NULL;
}

