/*�ַ�������ϰ*/
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
	cCharTemp=getchar();			//���ջس��� 
	
	printf("Second enter:");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	cCharTemp=getchar();			//���ջس��� 
	
	printf("Third enter:");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	
	return 0;
} 

void SwitchShow(char cChar)
{
	if(isalpha(cChar))				//�ж��Ƿ�Ϊ��ĸ 
	{
		printf("You enter a letter of te alphabet%c\n",cChar);
	}
	
	if(isdigit(cChar))				//�ж��Ƿ�Ϊ���� 
	{
		printf("You entered the digit %c\n",cChar);
	}
	
	if(isalnum(cChar))				//�ж��Ƿ�Ϊ��ĸ�������� 
	{
		printf("You entered the aplpanumeric character %c\n",cChar);
	}
	else							//�Ȳ�����ĸҲ�������ֵ�ʱ�� 
	{
		printf("You entered the character is not alphabet or digit:%c\n",cChar);
	}
} 
