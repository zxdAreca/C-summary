#include<stdio.h>
#include<string.h>
int main()
{
	char text[20],change[20];
	int num;
	int i=0;
	
	while(1)
	{
		 printf("输入转换大小写(1表示大写，2表示小写，0退出)：\n");
		 scanf("%d",&num);
		 if(num ==1)
		 {
		 	printf("输入一个字符串；\n");
		 	scanf("%s",&text);
		 	strcpy(change,text);
		 	strupr(change);
		 	printf("转化程大写的字符串为：%s\n",change);
		 }
		 else if(num == 2)
		 {
		 	printf("输入一个字符串；\n");		//输入要转换的字符串 
		 	scanf("%s",&text);					//复制要转换的字符串 
		 	strcpy(change,text);				//转换小写 
		 	strlwr(change);
		 	printf("转化程小写的字符串为：%s\n",change);
		 }
		 else if(num==0)
		 {
			break;	 	
		 } 
	}
	
	
	
	return 0;
		
} 
