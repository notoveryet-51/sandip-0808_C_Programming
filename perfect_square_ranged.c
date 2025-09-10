//perfect square in a given range
#include <stdio.h>


int main () {
  int a,b,count=0,j,k;
  printf("Enter the lower and upper bounds: \n");  
  scanf ("%d %d", &a, &b);
  for (int i=a ; i<=b; i++) {
      for (j=1; j<=b ; j++) {
          k=j*j;
          if (i == k)
              count++;
      }
                 
  }
  printf("%d", count);
  return 0;
}    
    