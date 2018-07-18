#include<stdio.h>
int main()
{
	int num;
	int tmp=0;
	
	for(num=0;num<=100;num++)
	{
		if(num%3==0)
		{
			continue;
		}
		else 
		{
			printf("%d\n",num);
		}
		
		
	}
}
