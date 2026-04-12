/*Basic C programs
Regn no.: 2025CA085
Program Date: 11-04-2026
Program Time: 09:41 IST    */

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
    struct node* link;
}*start=NULL,*prev,*new,*temp,*head,*next;

void create () {
    int n;  printf ("Enter a number: ");
    scanf("%d",&n);
    start=(struct node*)malloc(sizeof(struct node));
    start->data=n;
    start->link=NULL;
}

void print() {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    head=start;
    printf("The elements in the list are: ");
    while (head!=NULL)    {
        printf("%d ",head->data);
        head=head->link;
    }
}

void insertFirst () {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    new=(struct node*)malloc(sizeof(struct node));
    int n;  printf("Enter the new element: ");
    scanf ("%d",&n);
    new->data=n;
    new->link=start;
    start=new;
}

void insert ()  {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    temp=start;
    while (temp->link!=NULL)  {
        temp=temp->link;
    }
    printf ("Enter next element: ");
    int a;  scanf("%d",&a);
    new=(struct node*)malloc(sizeof(struct node));
    new->data=a;
    new->link=NULL;
    temp->link=new;
    temp=new;
}

void insertPosition() {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    int n;  printf("Input the position you want to insert the element at: ");
    scanf("%d",&n);
    int count=1;
    temp=start;
    while (temp->link!=NULL)    {
        temp=temp->link;
        count++;
    }
    //changed
    if (n == 1) {
        insertFirst();
    }
    else if (n == count + 1) {
        insert();
    }
    //
    else if (n>count+1) printf("Invalid Operation!!!");
    else {
        count=1;
        temp=start;
        while (count<n)    {
            prev=temp;
            temp=temp->link;
            count++;
        }
        new=(struct node*)malloc(sizeof(struct node));
        printf ("Enter next element: ");
        int a;  scanf("%d",&a);
        new->data=a;
        prev->link=new; new->link=temp;
    }   
}

void deleteFirst()  {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    temp=start;
    printf("Deleted node: %d",start->data);
    start=start->link;
    free(temp);
}

void deleteLast()   {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    //added single data check
    if (start->link == NULL) {
        printf("Deleted node: %d", start->data);
        free(start);
        start = NULL;
        return;
    }
    //
    temp=start;
    while (temp->link!=NULL)  {
        prev=temp;
        temp=temp->link;
    }
    prev->link=NULL;
    printf("Deleted node: %d",temp->data);
    free(temp);
}

void deletePosition ()    {
    if (start==NULL)    {
        printf ("The list is empty!!");
        return;
    }
    int n;  printf("Input the position you want to insert the element at: ");
    scanf("%d",&n);
    int count=1;
    temp=start;
    while (temp->link!=NULL)    {
        temp=temp->link;
        count++;
    }
    if (n>count) printf("Invalid Operation!!!");
    //added delete from first
    else if (n == 1) {
        deleteFirst();
        return;
    }
    //
    else {
        count=1;
        temp=start;
        while (count<n)    {
            prev=temp;
            temp=temp->link;
            count++;
        }
        next=temp->link;
        if (next==NULL) {
            printf("Deleted node: %d",temp->data);
            prev->link=NULL;
            free(temp);
        }
        else {
            prev->link=next;
            printf("Deleted node: %d",temp->data);
            free(temp);
        }
    }
}

int main() {
    printf("Code for Linked List\n");
    while (true)    {
        printf ("1. Create\n");
        printf("2. Print\n");
        printf("3. InsertFirst\n");
        printf("4. Insert\n");
        printf("5. InsertPosition\n");
        printf("6. DeleteFirst\n");
        printf("7. DeleteLast\n");
        printf("8. DeletePosition\n");
        printf("Press Any Other Number To Exit!!");
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