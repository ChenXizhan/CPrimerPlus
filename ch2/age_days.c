// age_days.c -- 把年龄转换成天数，不考虑平年闰年的问题

#include <stdio.h>
int main(void){
	int age;
	int day;
	
	age = 21;
	day = age * 360;
	printf("age: %d, day: %d\n", age, day);
	
	
	return 0;
}