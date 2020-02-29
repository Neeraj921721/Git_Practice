#include <stdio.h>

int mul(int a,int b){
  return a*b;
}

int main(int argc, char const *argv[]) {
  int a=10;
  int b=5;
  int ret=mul(a,b);
  printf("%d time %d = %d\n",a,b,ret );
  return 0;
}
