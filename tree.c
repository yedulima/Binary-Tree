#include <stdio.h>
#include <stdlib.h>
#include "./headers/tree.h"

Tree* insert(Tree *t, int val) {
    if (t == NULL) {
        t = (Tree*) malloc(sizeof(Tree));
        t->info = val;
        t->left = NULL;
        t->right = NULL;
    }
    else if (val < t->info) {
        t->left = insert(t->left, val);
    }
    else if (val > t->info) {
        t-> right = insert(t->right, val);
    }

    return t;
}

int search(Tree *t, int val) {
    if (t == NULL) {
        return 0;
    }
    if (val < t->info) {
        search(t->left, val);
    }
    else if (val > t->info) {
        search(t->right, val);
    }
    else {
        return 1;
    }

}

void print_tree(Tree *t) {
    if (t != NULL) {
        print_tree(t->left);
        printf("%d ", t->info);
        print_tree(t->right);
    }
}