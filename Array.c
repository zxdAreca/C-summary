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
	
	for(index=0;index<2;index++)	/*将数组中的元素的前后位置进行互换*/
	{
		temp=Array[index];
		Array[index]=Array[4-index] ;
		Array[4-index]=temp;
	}
	printf("Now Array is:\n");
	for(index=0;index<5;index++)
	{
		printf("%d",Array[index]);		/*将转化后的数组再次输出*/
	}
	printf("\n");
	
	return 0;
}
