#include<stdio.h>
#include<string.h>
int main()
{
	char text[20],change[20];
	int num;
	int i=0;
	
	while(1)
	{
		 printf("����ת����Сд(1��ʾ��д��2��ʾСд��0�˳�)��\n");
		 scanf("%d",&num);
		 if(num ==1)
		 {
		 	printf("����һ���ַ�����\n");
		 	scanf("%s",&text);
		 	strcpy(change,text);
		 	strupr(change);
		 	printf("ת���̴�д���ַ���Ϊ��%s\n",change);
		 }
		 else if(num == 2)
		 {
		 	printf("����һ���ַ�����\n");		//����Ҫת�����ַ��� 
		 	scanf("%s",&text);					//����Ҫת�����ַ��� 
		 	strcpy(change,text);				//ת��Сд 
		 	strlwr(change);
		 	printf("ת����Сд���ַ���Ϊ��%s\n",change);
		 }
		 else if(num==0)
		 {
			break;	 	
		 } 
	}
	
	
	
	return 0;
		
} 
