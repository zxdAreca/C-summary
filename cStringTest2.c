/*
	�ַ����ļ��ܺͽ���
	���ܷ�ʽ�����ַ����е�ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����5.
	���磺"mrsoft" ��һ���ַ�m���ַ����е�λ����0����ô��Ӧ��������'m'+0+5����r 
	 

*/
#include<stdio.h>
#include<string.h>
int main()
{
	int result = 1;
	int i;
	int count = 0;
	char Text[128] = {'\0'}	;
	char cryptograph[128] = {'\0'};
	while(1)
	{
		if(result==1)
		{
			printf("������Ҫ���ܵ����ģ�\n");
			scanf("%s",&Text);
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				cryptograph[i] = Text[i] + i + 5; 	//���ü����ַ� 
			}
			cryptograph[i] = '\0';					//�����ַ���������� 
			//���������Ϣ
			printf("���ܺ�������ǣ�%s\n",cryptograph);
			 
		}
		else if(result==2)
		{
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				Text[i] = cryptograph[i] -i-5;
			}
			Text[i] = '\0';
			printf("���ܺ�������ǣ�%s\n",Text);
		}
		else if(result==3)
		{
			break;
		}			else
		{
			printf("�������������\n");
		}			//����ַ���
		printf("����1�����µ����ģ�����2�Ըռ��ܵ����Ľ��н��ܣ�����3�˳�ϵͳ��\n");
		printf("�������������\n");
		scanf("%d",&result) ;
		
	}
} 
