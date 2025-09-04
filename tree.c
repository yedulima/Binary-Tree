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

void print_tree(Tree *t) {
    if (t != NULL) {
        print_tree(t->left);
        printf("%d ", t->info);
        print_tree(t->right);
    }
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

int getTreeLength(Tree *t) {
    if (t == NULL) {
        return 0;
    }
    else {
        return 1 + getTreeLength(t->left) + getTreeLength(t->right);
    }
}

Tree* removeNode(Tree *t, int val) {
    if (t == NULL) {
        return NULL;
    }
    else if (val == t->info) {
        if (t->left == NULL && t->right == NULL) {
            free(t);
            return NULL;
        }
        else if (t->left == NULL || t->right == NULL) {
            Tree *aux = t->left != NULL ? t->left : t->right;
            free(t);
            return aux;
        }
        else if (t->left != NULL && t->right != NULL) {
            Tree *aux = t->left;
            while (aux->right != NULL) {
                aux = aux->right;
            }
            t->info = aux->info;
            aux->info = val;
            t->left = removeNode(t->left, val);
            return t;
        }
    }
    else if (val < t->info) {
        t->left = removeNode(t->left, val);
    }
    else if (val > t->info) {
        t->right = removeNode(t->right, val);
    }

    return t;
}