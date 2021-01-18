#include <stdio.h>
int foo(int x){
   return x+1;
}
void main(){
   int x=10;
   x=foo(x);
   printf("%d\n",x);
}

