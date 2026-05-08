/*Basic C programs
Regn no.: 2025CA085
Program Date: 13-04-2026
Program Time: 10:33 IST    */

/**
 *  ███████╗ █████╗ ███╗   ██╗██████╗ ██╗██████╗  █████╗ ███╗   ██╗
 *  ██╔════╝██╔══██╗████╗  ██║██╔══██╗██║██╔══██╗██╔══██╗████╗  ██║
 *  ███████╗███████║██╔██╗ ██║██║  ██║██║██████╔╝███████║██╔██╗ ██║
 *  ╚════██║██╔══██║██║╚██╗██║██║  ██║██║██╔═══╝ ██╔══██║██║╚██╗██║
 *  ███████║██║  ██║██║ ╚████║██████╔╝██║██║     ██║  ██║██║ ╚████║
 *  ╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝╚═╝     ╚═╝  ╚═╝╚═╝  ╚═══╝
 *
 *                 S A N D I P A N   R A Y
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>

struct node {
    int data;
    struct node *left, *right;
} *root=NULL;

// Create tree (recursive input)
struct node* build() {
    int x;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1) return NULL;

    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = x;

    printf("Enter left child of %d\n", x);
    new->left = build();

    printf("Enter right child of %d\n", x);
    new->right = build();

    return new;
}

// Inorder
void inorder(struct node *t) {
    if (t == NULL) return;
    inorder(t->left);
    printf("%d ", t->data);
    inorder(t->right);
}

// Preorder
void preorder(struct node *t) {
    if (t == NULL) return;
    printf("%d ", t->data);
    preorder(t->left);
    preorder(t->right);
}

// Postorder
void postorder(struct node *t) {
    if (t == NULL) return;
    postorder(t->left);
    postorder(t->right);
    printf("%d ", t->data);
}

int main() {
    while (true) {
        printf("\n-----------Binary Tree-----------\n");
        printf("1. Create Tree\n");
        printf("2. Inorder\n");
        printf("3. Preorder\n");
        printf("4. Postorder\n");
        printf("Press any other key to exit\n");
        printf("Enter choice: ");

        int ch;
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                root=build();
                break;
            case 2:
                inorder(root);
                break;
            case 3:
                preorder(root);
                break;
            case 4:
                postorder(root);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}