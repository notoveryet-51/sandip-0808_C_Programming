#include <stdio.h>
#include <stdbool.h>
bool boolean(int a, int b, int c) {
  if (a>=1 && a<=31 && b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) 
    return true;
  else if (a>=1 && a<=30 && b==4 || b==6 || b==9 || b==11)
    return true;
  else if (a>=1 && a<=29 && b==2)
    return true;
  else if (a<=0 ||b<=0 ||c<0)
    return false;
  else return false;
}
int main () {
  int x,y,z,a;
  printf ("Enter the day, month & year: ");
  scanf ("%d %d %d",&x,&y,&z);
  a=boolean(x,y,z);
  printf ("Result: %d",a);
}