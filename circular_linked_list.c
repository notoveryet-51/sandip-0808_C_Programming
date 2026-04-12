/*Basic C programs
Regn no.: 2025CA085
Program Date: 11-04-2026
Program Time: 19:21 IST    */

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
}*temp,*head=NULL,*new,*prev,*next;

void create()   {
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data: ");
    int a;  scanf("%d",&new->data);
    head=new;
    new->add=head;
}

void insertFirst()  {
    if (head==NULL) {
        create(); return;
    }
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data: ");
    int a;  scanf("%d",&new->data);
    temp=head;
    while (temp->add!=head)    {
        temp=temp->add;
    }
    new->add=head;
    head=new;
    temp->add=head;
}

void insertLast()   {
    if (head==NULL) {
        create(); return;
    }
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter a data: ");
    int a;  scanf("%d",&new->data);
    temp=head;
    while (temp->add!=head)    {
        temp=temp->add;
    }
    temp->add=new;
    new->add=head;
}

void insertPosition() {
    if (head==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    int n;  printf("Input the position you want to insert the element at: ");
    scanf("%d",&n);
    int count=1;
    temp=head;
    while (temp->add!=head)    {
        temp=temp->add;
        count++;
    }
    if (n == 1) {
        insertFirst();
    }
    else if (n == count + 1) {
        insertLast();
    }
    else if (n>count+1) printf("Invalid Operation!!!");
    else {
        count=1;
        temp=head;
        while (count<n)    {
            prev=temp;
            temp=temp->add;
            count++;
        }
        new=(struct node*)malloc(sizeof(struct node));
        printf ("Enter next element: ");
        int a;  scanf("%d",&a);
        new->data=a;
        prev->add=new; new->add=temp;
    }   
}

void deleteFirst()  {
    if (head==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    temp=head;
    while (temp->add!=head)    {
        temp=temp->add;
    }
    prev=head;
    head=head->add;
    printf("The deleted node is: %d",prev->data);
    free(prev);
    temp->add=head;
}

void deleteLast() {
    if (head==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    temp=head;
    while (temp->add!=head)    {
        prev=temp;
        temp=temp->add;
    }
    printf("The deleted node is: %d",temp->data);
    free(temp);
    prev->add=head;
}

void deletePosition() {
    if (head==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    int n;  printf("Input the position you want to delete the element at: ");
    scanf("%d",&n);
    int count=1;
    temp=head;
    while (temp->add!=head)    {
        temp=temp->add;
        count++;
    }
    if (n>count) printf("Invalid Operation!!!");
    else if (n == 1) {
        deleteFirst();
        return;
    }
    else {
        count=1;
        temp=head;
        while (count<n)    {
            prev=temp;
            temp=temp->add;
            count++;
        }
        next=temp->add;
        if (next==head) {
            printf("Deleted node: %d",temp->data);
            prev->add=head;
            free(temp);
        }
        else {
            prev->add=next;
            printf("Deleted node: %d",temp->data);
            free(temp);
        }
    }
}

void print() {
    if (head==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    temp=head;
    if (temp->add==head) {
        printf("%d ",temp->data);
        return;
    }
    while (temp->add!=head)    {
        printf("%d ",temp->data);
        temp=temp->add;
    }
    printf("%d ",temp->data);
}

int main() {
    while (true)    {
        printf("-----------Circular Singly Linked List-----------\n");
        printf("1. Create\n");
        printf("2. Print\n");
        printf("3. InsertFirst\n");
        printf("4. InsertLast\n");
        printf("5. InsertPosition\n");
        printf("6. DeleteFirst\n");
        printf("7. DeleteLast\n");
        printf("8. DeletePosition\n");
        printf("Press Any Other Number To Exit!!\n");
        printf("Enter a operation: ");
        int n;  scanf("%d",&n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            print();
            break;
        case 3:
            insertFirst();
            break;
        case 4:
            insertLast();
            break;
        case 5:
            insertPosition();
            break;
        case 6:
            deleteFirst();
            break;
        case 7:
            deleteLast();
            break;
        case 8:
            deletePosition();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}