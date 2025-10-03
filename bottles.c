#include <stdio.h>
int main() {
    int numBottles,numExchange,full,rem,empty,total;
    printf("Enter the no. of full bottles you have: ");
    scanf("%d",&numBottles);
    printf("Enter the no. of full bottles you can exchange: ");
    scanf("%d",&numExchange);
    total=numBottles;
    while(numBottles>=numExchange){ 
        rem=numBottles%numExchange;
        full=numBottles/numExchange;
        total+=full;
        empty=full+rem;
        numBottles=empty;
    }
    
    printf("Maximum no. of bottles that can be drunk is: %d",total);
}