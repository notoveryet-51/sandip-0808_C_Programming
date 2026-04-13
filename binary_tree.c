/*Basic C programs
Regn no.: 2025CA085
Program Date: 13-04-2026
Program Time: 09:09 IST    */

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

struct tree {
    int data;
    struct tree *left,*right;
}*root;

struct tree* create() {
    int x;
    printf("Enter data(-1 for return)\n");
    scanf("%d",&x); if (x==-1) return NULL;
    struct tree* new=(struct tree*)malloc(sizeof(struct tree));
    new->data=x;
    printf("Enter the left child of %d\n",x);
    new->left=create();
    printf("Enter the right child of %d\n",x);
    new->right=create();
    return new;
}

void inorder(struct tree* root) {
    if (root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void preorder(struct tree* root) {
    if (root==NULL) return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct tree* root) {
    if (root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main() {
    root=create();
    printf("Inorder Traversal is: ");
    inorder(root);
    printf("\n");
    printf("Preorder Traversal is: ");
    preorder(root);
    printf("\n");
    printf("Postorder Traversal is: ");
    postorder(root);
    printf("\n");
    return 0;
}