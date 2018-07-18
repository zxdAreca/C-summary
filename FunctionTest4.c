/*字符函数练习*/
#include<stdio.h>
#include<ctype.h>

void SwitchShow(char c);

int main()
{
	char cCharPut;
	char cCharTemp;
	
	printf("First enter:");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	cCharTemp=getchar();			//接收回车符 
	
	printf("Second enter:");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	cCharTemp=getchar();			//接收回车符 
	
	printf("Third enter:");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	
	return 0;
} 

void SwitchShow(char cChar)
{
	if(isalpha(cChar))				//判断是否为字母 
	{
		printf("You enter a letter of te alphabet%c\n",cChar);
	}
	
	if(isdigit(cChar))				//判断是否为数字 
	{
		printf("You entered the digit %c\n",cChar);
	}
	
	if(isalnum(cChar))				//判读是否为字母或者数字 
	{
		printf("You entered the aplpanumeric character %c\n",cChar);
	}
	else							//既不是字母也不是数字的时候 
	{
		printf("You entered the character is not alphabet or digit:%c\n",cChar);
	}
} 
