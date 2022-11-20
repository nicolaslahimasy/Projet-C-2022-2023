//
// Created by nico9 on 13/11/2022.
//
#ifndef PROJET_C_BROUILLON_2022_NODE_H
#define PROJET_C_BROUILLON_2022_NODE_H
#include "tree.h"

// Structure d'une cellule //
typedef struct s_letter_node t_letter_node, *p_letter_node ;
// Structure pour les formes fléchies
typedef struct s_word t_word, *p_word ;

typedef struct s_cell
{
    p_letter_node son ;
    struct s_cell * next ;
};

typedef struct s_cell t_cell, *p_cell;

// Structure d'une s_std_list pour la tête de la liste
typedef struct s_std_list
{
    p_cell head;
} t_std_list;

// Structure pour parcourir les cellules de mots
typedef struct s_word_cell
{
    p_word son ;
    struct s_word_cell * next ;
} t_word_cell, *p_word_cell ;

// Structure pour parcourir les listes de mots
typedef struct s_word_list
{
    p_word_cell head ;
} t_word_list ;


// Structure dans lequel on met un noeud avec le caractère et ses enfants
struct s_letter_node
{
    char letter ;
    t_std_list *sons;
    t_word_list * arrowedform;
};
typedef struct s_letter_node t_letter_node, *p_letter_node ;

// Structure pour un noeud
typedef struct s_node
{
    int value;
    struct s_node * right;
    struct s_node * left;
}t_node, *p_node;


// Structure d'un mot et de sa forme fléchie
struct s_word
{
    char * arrowed;
    char * form;
};

t_std_list * t_EmptyList();
p_letter_node createNode(char letter);
p_node searchWORD(t_tree tree, char letter);
void addNode(t_tree tree, char letter);
p_cell createCell(char letter);
p_word_cell createWordCell();

#endif //PROJET_C_BROUILLON_2022_NODE_H
