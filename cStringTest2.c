/*
	字符串的加密和解密
	加密方式：将字符串中的每个字符加上它在字符串中的位置和一个偏移量5.
	例如："mrsoft" 第一个字符m在字符串中的位置是0，那么对应的密文是'm'+0+5，即r 
	 

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
			printf("请输入要加密的明文：\n");
			scanf("%s",&Text);
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				cryptograph[i] = Text[i] + i + 5; 	//设置加密字符 
			}
			cryptograph[i] = '\0';					//设置字符串结束标记 
			//输出密文信息
			printf("加密后的密文是：%s\n",cryptograph);
			 
		}
		else if(result==2)
		{
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				Text[i] = cryptograph[i] -i-5;
			}
			Text[i] = '\0';
			printf("解密后的明文是：%s\n",Text);
		}
		else if(result==3)
		{
			break;
		}			else
		{
			printf("请输入命令符：\n");
		}			//输出字符串
		printf("输入1加密新的明文，输入2对刚加密的密文进行解密，输入3退出系统：\n");
		printf("请输入命令符：\n");
		scanf("%d",&result) ;
		
	}
} 
