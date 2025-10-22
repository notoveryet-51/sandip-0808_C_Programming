#include <stdio.h>
int upper (int x) {
  if (x>=65 && x<81) 
    return x;
  else return (x-32);
}
int main () {
  char ch;
  printf ("Enter a alphabet: ");
  scanf ("%c",&ch);
  printf ("The alphabet in upper case is: %c",upper(ch));
  return 0;
}