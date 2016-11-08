// jolly_good_fellow.c --- 输出夸奖的消息

#include <stdio.h>

void jolly_good_fellow();
void confirm();

int main(void){
	jolly_good_fellow();
	jolly_good_fellow();
	jolly_good_fellow();
	confirm();
	return 0;
}

void jolly_good_fellow(){
	printf("For he's a jolly good fellow!\n");
}

void confirm(){
	printf("Which nobody can deny!\n");
}