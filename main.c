#include <stdio.h>
#include "./headers/tree.h"

// gcc main.c tree.c -o BinaryTree.exe | ./BinaryTree.exe

int main() {
    Tree *tree = NULL;

    tree = insert(tree, 500);
    tree = insert(tree, 350);
    tree = insert(tree, 349);

    print_tree(tree);

    printf("\n%d\n", search(tree, 348));
    printf("%d\n", search(tree, 349));

    return 0;
}