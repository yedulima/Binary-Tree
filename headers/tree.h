#ifndef TRREE_H_INCLUDED
#define TRREE_H_INCLUDED

    typedef struct _tree {
        int info;
        struct _tree *left;
        struct _tree *right;
    } Tree;

    Tree* insert(Tree *t, int val);

    void print_tree(Tree *t);
    int search(Tree *t, int val);

#endif