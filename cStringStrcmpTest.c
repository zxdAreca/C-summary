/*
strcmp（字符串比较）
Test：比较用户输入的用户名和密码是否正确	

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char user[20] = {"mrsoft"};
	char password[20] = {"mrkj"} ;
	char ustr[20],pwstr[20];
	int i=0;
	
	while(i<3)		//循环的标记 
	{
		printf("输入用户名字符串：\n");
		gets(ustr);
		printf("输入密码字符串：\n");
		gets(pwstr);
		if(strcmp(user,ustr))
		{
			printf("用户名字符串输入错误！\n");
		}
		else
		{
			if(strcmp(password,pwstr))
			{
				printf("密码字符串输入错误！\n");
			}
			else
			{
				printf("欢迎使用！\n");
				break;
			}
		}
		i++;
	}
	if(i==3)
	{
		printf("输入字符串错误3次！\n");
	}
} 
