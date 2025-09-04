#include <stdio.h>
#include "./headers/tree.h"

// gcc main.c tree.c -o BinaryTree.exe | ./BinaryTree.exe

int main() {
    Tree *tree = NULL;

    tree = insert(tree, 500);
    tree = insert(tree, 750);
    tree = insert(tree, 250);
    tree = insert(tree, 75);
    tree = insert(tree, 305);
    tree = insert(tree, 50);
    tree = insert(tree, 85);

    print_tree(tree);

    printf("\nTamanho da arvore: %d\n", getTreeLength(tree));

    tree = removeNode(tree, 250);

    print_tree(tree);

    printf("\nTamanho da arvore: %d\n", getTreeLength(tree));

    return 0;
}