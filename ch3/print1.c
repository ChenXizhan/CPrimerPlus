// print1.c -- 说明printf()的一些属性
#include <stdio.h>
int main(void){
	int ten = 10;
	int two = 2;
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);
	printf("Doint it right: ");
	printf("%d minus %d is %d\n", ten, two, ten - two);
	return 0;
}
