/*
strcmp���ַ����Ƚϣ�
Test���Ƚ��û�������û����������Ƿ���ȷ	

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char user[20] = {"mrsoft"};
	char password[20] = {"mrkj"} ;
	char ustr[20],pwstr[20];
	int i=0;
	
	while(i<3)		//ѭ���ı�� 
	{
		printf("�����û����ַ�����\n");
		gets(ustr);
		printf("���������ַ�����\n");
		gets(pwstr);
		if(strcmp(user,ustr))
		{
			printf("�û����ַ����������\n");
		}
		else
		{
			if(strcmp(password,pwstr))
			{
				printf("�����ַ����������\n");
			}
			else
			{
				printf("��ӭʹ�ã�\n");
				break;
			}
		}
		i++;
	}
	if(i==3)
	{
		printf("�����ַ�������3�Σ�\n");
	}
} 
