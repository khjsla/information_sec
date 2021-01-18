#include <stdio.h>
void  foo(){
   char  id[30];
   printf("id location:%p. enter id\n", id);
   scanf("%s", id);
   printf("you entered %s \n", id);
}
int main(){
   foo();
   printf("program ends here\n");
   return 0;
}

