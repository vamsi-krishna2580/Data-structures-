#include <stdio.h>

#define SIZE 100

// Function prototypes
void inorder(int tree[], int index, int size);
void preorder(int tree[], int index, int size);
void postorder(int tree[], int index, int size);

int main() {


    int tree[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    printf("Inorder traversal: ");
    inorder(tree, 0, size);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(tree, 0, size);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(tree, 0, size);
    printf("\n");

    return 0;
}

// Inorder: Left, Root, Right
void inorder(int tree[], int index, int size) {
    if (index >= size) return;
    inorder(tree, 2 * index + 1, size);  // Left child
    printf("%d ", tree[index]);         // Root
    inorder(tree, 2 * index + 2, size);  // Right child
}

// Preorder: Root, Left, Right
void preorder(int tree[], int index, int size) {
    if (index >= size) return;
    printf("%d ", tree[index]);         // Root
    preorder(tree, 2 * index + 1, size);  // Left child
    preorder(tree, 2 * index + 2, size);  // Right child
}

// Postorder: Left, Right, Root
void postorder(int tree[], int index, int size) {
    if (index >= size) return;
    postorder(tree, 2 * index + 1, size);  // Left child
    postorder(tree, 2 * index + 2, size);  // Right child
    printf("%d ", tree[index]);           // Root
}