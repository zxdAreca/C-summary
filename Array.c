#include<stdio.h>
int main()
{
	int Array[5],index,temp;
	printf("Please enter a Array:\n");
	
	for(index=0;index<5;index++)
	{
		scanf("%d",&Array[index]);
	}
	
	printf("original Array is:\n");
	for(index=0;index<5;index++)
	{
		printf("%d",Array[index]);
	}
	printf("\n");
	
	for(index=0;index<2;index++)	/*�������е�Ԫ�ص�ǰ��λ�ý��л���*/
	{
		temp=Array[index];
		Array[index]=Array[4-index] ;
		Array[4-index]=temp;
	}
	printf("Now Array is:\n");
	for(index=0;index<5;index++)
	{
		printf("%d",Array[index]);		/*��ת����������ٴ����*/
	}
	printf("\n");
	
	return 0;
}
