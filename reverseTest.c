#include<stdio.h>
int main()
{
	int i;
	char String[7] = {"mrsoft"};
	char Reverse[7] = {0};
	int size;
	size = sizeof(String);
	printf("%d\n",size);
	
	/*ѭ����ȡ�ַ�*/
	for(i=0;i<6;i++)
	{
		Reverse[size-i-2] = String[i];
	} 
	
	/*���Դ�ַ���*/
	printf("%s\n",String);
	/*���Դ�ַ���*/
	printf("%s\n",Reverse);
	return 0;
}
