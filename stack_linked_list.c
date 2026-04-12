/*Basic C programs
Regn no.: 2025CA085
Program Date: 12-04-2026
Program Time: 10:36 IST    */

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
    struct node *add;
}*temp,*head=NULL,*new;

void push() {
    if (head==NULL) {
        new=(struct node*) malloc(sizeof(struct node));
        printf("Enter the first data: ");
        scanf("%d", &new->data);
        new->add=NULL;
        head=new;
    }
    else {
        new=(struct node*) malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &new->data);
        new->add=head;
        head=new;
    }
}

void pop() {
    if (head==NULL) {
        printf("The stack is empty!!\n");
    }
    else if (head->add==NULL) {
        printf ("Popped data: %d\n",head->data);
        free(head); head=NULL;
    }
    else {
        temp=head;
        head=head->add;
        printf ("Popped data: %d",temp->data);
        free(temp);
    }
}

void top() {
    if (head==NULL) {
        printf("The stack is empty!!\n");
    }
    else printf ("Top-Stack data: %d\n",head->data);
}

int main() {
    while (true)    {
        printf("-----------Stack Linked List-----------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("Press Any Other Number To Exit!!\n");
        printf("Enter a operation: ");
        int n;  scanf("%d",&n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            top();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}