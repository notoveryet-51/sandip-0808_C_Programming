/*Basic C programs
Regn no.: 2025CA085
Program Date: 11-04-2026
Program Time: 16:48 IST    */

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
    struct node *prev,*next;
}*head=NULL,*temp,*new;

void create()       {
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in the list: ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;
    head=new;
}

void insert()   {
    if (head==NULL) {
        create();   return;
    }
    else {
        temp=head;
        while (temp->next!=NULL)    {
            temp=temp->next;
        }
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data in the list: ");
        scanf("%d",&new->data);
        temp->next=new;
        new->prev=temp;
        new->next=NULL;
    }
}

void insertMiddle() {
    if (head==NULL)  {
        printf ("The list is empty!!"); return;
    }
    else {
        printf("Enter the position: ");
        int a;  scanf("%d",&a);
        if (a == 1) {
            insertFirst();
            return;
        }
        int count=1;    temp=head;
        while (count < a && temp != NULL) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data in the list: ");
        scanf("%d",&new->data);
        new->prev=temp->prev;
        temp->prev->next=new;
        temp->prev=new;
        new->next=temp;
    }
}

void insertFirst()  {
    if (head==NULL)  {
        create(); return;
    }
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in the list: ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=head;
    head->prev=new;
    head=new;
}

void deleteFirst()  {
    if (head==NULL)  {
        printf ("The list is empty!!"); return;
    }
    if (head->next == NULL) {
        printf("Deleted data: %d", head->data);
        free(head);
        head = NULL;
        return;
    }
    temp=head;
    head=head->next;
    head->prev=NULL;
    printf("Deleted data: %d",temp->data);
    free(temp);
}

void deleteLast()   {
    if (head==NULL)  {
        printf ("The list is empty!!"); return;
    }
    if (head->next == NULL) {
        printf("Deleted data: %d", head->data);
        free(head);
        head = NULL;
        return;
    }
    temp=head;
    while (temp->next!=NULL)    {
        temp=temp->next;
    }
    printf("Deleted data: %d",temp->data);
    temp->prev->next=NULL;
    free(temp);
}

void deleteMiddle() {
    if (head==NULL)  {
        printf ("The list is empty!!"); return;
    }
    else {
        printf("Enter the position: ");
        int a;  scanf("%d",&a);
        if (a == 1) {
            deleteFirst();
            return;
        }
        int count=1;    temp=head;
        while (count<a && temp!=NULL) {
            temp=temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        if (temp->next == NULL) {
            temp->prev->next=NULL;
            printf("Deleted Data: %d",temp->data);
            free(temp);
            return;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        printf("Deleted data: %d",temp->data);
        free(temp);
    }
}

void print()    {
    if (head==NULL)  {
        printf ("The list is empty!!"); return;
    }
    temp=head;
    while (temp!=NULL)    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main() {
    while (true)    {
        printf("-----------Doubly Linked List-----------\n");
        printf("1. Create\n");
        printf("2. Print\n");
        printf("3. InsertFirst\n");
        printf("4. Insert\n");
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
            insert();
            break;
        case 5:
            insertMiddle();
            break;
        case 6:
            deleteFirst();
            break;
        case 7:
            deleteLast();
            break;
        case 8:
            deleteMiddle();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}