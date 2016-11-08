// smile.c  --- 输出用Smile组成的倒三角形
#include <stdio.h>
void smile(void);
int main(void){
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	return 0;
}

void smile(void){
	printf("Smile!");
}