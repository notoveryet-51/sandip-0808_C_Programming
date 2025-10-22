#include <stdio.h>
int linear_search(int n,int a[n],int b) {
  for (int i=0; i<n; i++) {
    if (a[i]==b)
      return 1;
  }
  return 0;
}
int main () {
  int n,a,x;
  printf ("Enter the array size: ");
  scanf ("%d",&n);
  int f[n];
  printf ("Enter the array elements:\n");
  for (int i=0; i<n; i++)
    scanf ("%d",&f[i]);
  printf ("Enter the element you want to search in the array: ");
  scanf ("%d",&x);
  a=linear_search(n,f,x);
  printf ("Result: %d\n",a);
}