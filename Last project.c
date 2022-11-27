#include <stdio.h>
int main()
{
  int i, j, f1=0, f2=1, fn;
  printf("Enter how much Fibonacci number you want: ");
  scanf("%d",&j);
  printf("Fibonacci: %d %d ",f1,f2);
  for(i=1;i<=j-2;i++)
  {
      fn=(f1+f2);
      printf("%d ",fn);
      f1=f2;
      f2=fn;
  }
  return 0;
}
