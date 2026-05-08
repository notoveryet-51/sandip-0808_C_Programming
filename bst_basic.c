#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *left, *right;
} *root = NULL, *new, *temp;

// Insert (BST style)
void insert() {
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->left = new->right = NULL;

    if (root == NULL) {
        root = new;
        return;
    }

    temp = root;
    while (true) {
        if (new->data < temp->data) {
            if (temp->left == NULL) {
                temp->left = new;
                return;
            }
            temp = temp->left;
        } else {
            if (temp->right == NULL) {
                temp->right = new;
                return;
            }
            temp = temp->right;
        }
    }
}

// Inorder (LNR)
void inorder(struct node *t) {
    if (t == NULL) return;
    inorder(t->left);
    printf("%d ", t->data);
    inorder(t->right);
}

// Preorder (NLR)
void preorder(struct node *t) {
    if (t == NULL) return;
    printf("%d ", t->data);
    preorder(t->left);
    preorder(t->right);
}

// Postorder (LRN)
void postorder(struct node *t) {
    if (t == NULL) return;
    postorder(t->left);
    postorder(t->right);
    printf("%d ", t->data);
}

// Wrappers (no parameters for main menu)
void inorder_call() {
    if (root == NULL) {
        printf("Tree is empty!!\n");
        return;
    }
    inorder(root);
    printf("\n");
}

void preorder_call() {
    if (root == NULL) {
        printf("Tree is empty!!\n");
        return;
    }
    preorder(root);
    printf("\n");
}

void postorder_call() {
    if (root == NULL) {
        printf("Tree is empty!!\n");
        return;
    }
    postorder(root);
    printf("\n");
}

// Search
void search() {
    if (root == NULL) {
        printf("Tree is empty!!\n");
        return;
    }

    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    temp = root;
    while (temp != NULL) {
        if (key == temp->data) {
            printf("Element found!\n");
            return;
        }
        else if (key < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }

    printf("Element not found!\n");
}

int main() {
    while (true) {
        printf("\n-----------Binary Search Tree-----------\n");
        printf("1. Insert\n");
        printf("2. Inorder\n");
        printf("3. Preorder\n");
        printf("4. Postorder\n");
        printf("5. Search\n");
        printf("Press any other number to exit\n");
        printf("Enter choice: ");

        int ch;
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                inorder_call();
                break;
            case 3:
                preorder_call();
                break;
            case 4:
                postorder_call();
                break;
            case 5:
                search();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}