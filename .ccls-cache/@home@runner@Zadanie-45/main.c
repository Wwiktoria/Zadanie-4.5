#include <stdio.h>

int main(void) {
  int a;
  int b;
  printf("Wprowadź liczbę a: ");
  scanf("%d",&a);
  printf("Wprowadź liczbę b: ");
  scanf("%d",&b);
  while(a!=b){
    if(a>b)
    {
      a=a-b;
    }
    else
    {
      b=b-a;
    }
  }
  printf("NWD to %d",a);
  return 0;
}