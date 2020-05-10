#include <stdio.h>

int sum(int a, int b);

int main(){
  int a=3;
  int b=5;
  int sum_result;
  printf("Hello");
  printf("Hello!! I'm suho\n");
  printf("HI!! o_< \n");
  sum_result = sum(a, b);
  printf("%d", sum_result);
  return 0;
}

int sum(int a, int b){
  int c;
  c=a+b;
  return c;
}
