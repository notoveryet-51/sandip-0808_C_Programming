/*Basic C programs
Regn no.: 2025CA085
Program Date: 12-04-2026
Program Time: 13:10 IST    */

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
#define MAXSIZE 10

int queue[MAXSIZE];
int front=-1,back=-1;

void top() {
    if (front==-1 || front>back) printf("The queue is empty!!\n");
    else {
        printf("The data in the front of queue is: %d\n",queue[front]);
    }
}

void enqueue() {
    if (back==MAXSIZE-1) {
        printf("The queue is full!!\n");
    }
    else if (front==-1)  {
        printf("Enter a data: ");
        scanf("%d",&queue[0]);
        back=0; front=0;
    }
    else {
        printf("Enter the data: ");
        scanf("%d",&queue[++back]);
    }
}

void dequeue() {
    if (front>back || front==-1) printf("The queue is empty!!\n");
    else {
        printf("The deleted data is: %d\n",queue[front]);
        front++;
    }
    if (front>back){
        front=-1;   back=-1;
    }
}

int main() {
    while (true)    {
        printf("-----------Queue using Array-----------\n");
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