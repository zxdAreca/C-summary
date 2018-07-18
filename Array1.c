/*使用数组保存学生姓名*/ 
#include<stdio.h>
int main()
{
	char *ArrayName[5];
	int index;
	ArrayName[0]="WangJiansheng";
	ArrayName[1]="LiuWen";
	ArrayName[2]="SuYuqun";
	ArrayName[3]="LeiYu";
	ArrayName[4]="ZhangMeng";
	for(index=0;index<5;index++)
	{
		printf("%s\n",ArrayName[index]);
	 } 
	return 0;	
} 
