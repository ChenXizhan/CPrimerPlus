/* rhodium.c -- 用金属铑衡量你的体重 */
#include <stdio.h>
int main(void){
	float weight; //用户的体重
	float value; // 相等重量的铑的价值

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out!\n");
	printf("Please enter your weight in pounds:");
	fflush(stdout); // 手动刷新标准输出流
	// 从用户出获得输入
	scanf(" %f",&weight);
	// 假设铑的价格为700美元每盎司
	// 一英镑约相当于14.5833盎司
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0;
}
// 在mingw32中编译后，运行时，没能看到任何输出，需要先输入数字才能看到输出？？？怎么回事？程序的执行顺序不是这么来的
