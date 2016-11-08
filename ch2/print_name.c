/*
	print_name.c  --- 这个程序重复三次输出我的名字
*/

#include <stdio.h>

int main(void){
	
	// 调用一次printf(),在一行中输出姓名
	printf("chen xizhan\n");
	// 调用一次，在两行分别输出姓和名
	printf("chen\nxizhan\n");
	
	// 调用两次，在一行中输出姓和名
	printf("chen");
	printf("xizhan\n");
	
	
	return 0;
}