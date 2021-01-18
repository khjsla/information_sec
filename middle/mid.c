#include <stdio.h>
#include <string.h>
void loginSucc(){
   printf("login successful\n");
}
void getID(char *id){
   char temp[21];
   printf("enter id\n");
   scanf("%s", temp);
   strcpy(id, temp);
    return;
}
int main(){
   char id[5];
   getID(id);
   if (!strcmp(id,"abc")) loginSucc();
   else  printf("login failure\n");
}

