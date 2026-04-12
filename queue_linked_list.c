/*Basic C programs
Regn no.: 2025CA085
Program Date: 12-04-2026
Program Time: 11:18 IST    */

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
}*temp,*front=NULL,*new,*back;

void top() {
    if (front==NULL) {
        printf(" The queue is empty!!\n"); return;
    }
    printf("The Data in the front is: %d", front->data);
}

void enqueue() {
    if (front==NULL) {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&new->data);
        new->add=NULL;
        front=new;
        back=new;
    }
    else {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&new->data);
        new->add=NULL;
        back->add=new;
        back=new;
    }
}

void dequeue () {
    if (front==NULL) {
        printf("The queue is empty!!\n");
    }
    else{
        temp=front;
        printf("The deleted data: %d\n",front->data);
        front=front->add;
        free(temp);
        if (front==NULL) back=NULL;
    }
}

int main() {
    while (true)    {
        printf("-----------Queue Linked List-----------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Top\n");
        printf("Press Any Other Number To Exit!!\n");
        printf("Enter a operation: ");
        int n;  scanf("%d",&n);
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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