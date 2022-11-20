//
// Created by nico9 on 13/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#ifndef PROJET_C_BROUILLON_2022_TREE_H
#define PROJET_C_BROUILLON_2022_TREE_H


struct s_tree
{
    struct s_letter_node * root;
};

typedef struct s_tree t_tree, *p_tree;

t_tree CreateTree();
void ReadFile(FILE *myfile);

#endif //PROJET_C_BROUILLON_2022_TREE_H

