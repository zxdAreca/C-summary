/*
���ռ���Ϊ��λ���鸳ֵ����ʾ��λ���顣
������������Ԫ�غ���СԪ�ص�ֵ�Լ��±꣬
����ά����ת��Ϊ��һ����λ���鲢��ʾ�� 
*/
#include<stdio.h>
int main()
{
	int a[2][3],b[3][2];
	int max,min;
	int h,l,i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("�����ά���飺\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	/*�������е����Ԫ�ؼ����±�*/
	
	max = a[0][0];
	h = 0;
	l = 0;
	for(i=0;i<2;i++)
	{
		for(i=0;j<3;j++)
		{
			if(max < a[i][j]);
			{
				max = a[i][j];
				h=i;
				l=j;
			}
		 } 
	}
	printf("���������Ԫ���� ��\n") ;
	printf("max:a[%d][%d]=%d\n",h,l,max);
	
	/*�������е���СԪ�ؼ����±�*/
	min = a[0][0];
	h=0;
	l=0;
	for(i=0;i<2;i++)
	{
		for(i=0;j<3;j++)
		{
			if(min > a[i][j]);
			{
				min = a[i][j];
				h=i;
				l=j;
			}
		 } 
	}
	printf("��������СԪ���� ��\n");
	printf("min:a[%d][%d]=%d\n",h,l,min);
	/*������aת�����������b��*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			b[j][i]=a[i][j];
		}	
	}
	printf("���ת����Ķ�λ����: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[j][i]);
		}
		printf("\n");	/*ʹԪ�ط�����ʾ*/
	}
	return 0;
}
