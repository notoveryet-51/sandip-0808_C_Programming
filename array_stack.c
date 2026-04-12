/*Basic C programs
Regn no.: 2025CA085
Program Date: 12-04-2026
Program Time: 12:36 IST    */

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

int stack[MAXSIZE];
int count=-1;

void push() {
    if (count==MAXSIZE-1) {
        printf("The stack is full!!\n");
    }
    else {
        count++;
        printf("Enter the data: ");
        scanf("%d",&stack[count]);
    }
}

void pop() {
    if (count==-1) {
        printf("The stack is empty!!\n");
    }
    else {
        printf("The popped data: %d\n", stack[count]);
        count--;
    }
}

void top() {
    if (count==-1) {
        printf("The stack is empty!!\n");
    }
    else {
        printf("The data in the top is: %d\n", stack[count]);
    }
}

int main() {
    while (true)    {
        printf("-----------Stack Using Arrays-----------\n");
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