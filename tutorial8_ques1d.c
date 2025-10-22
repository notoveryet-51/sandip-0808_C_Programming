#include <stdio.h>
int boolean(int a, int b, int c) {
  if (a>=1 && a<=31 && b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) 
    return 1;
  else if (a>=1 && a<=30 && b==4 || b==6 || b==9 || b==11)
    return 1;
  else if (a>=1 && a<=29 && b==2)
    return 1;
  else if (a<=0 ||b<=0 ||c<0)
    return 0;
  else return 0;
}
int main () {
  int x,y,z,a;
  printf ("Enter the day, month & year: ");
  scanf ("%d %d %d",&x,&y,&z);
  a=boolean(x,y,z);
  // if (boolean(x,y,z)==0)
  //   printf ("The numbers are equal.\n");
  // else printf ("The numbers are not equal\n");
  printf ("Result: %d",a);
}