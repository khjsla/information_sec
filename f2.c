#include <stdio.h>
void  foo(){
   char  id[5];
   printf("enter id\n");
   scanf("%s", id);
   printf("you entered %s \n", id);
}
int main(){
   foo();
   printf("program ends here\n");
   return 0;
}

