



#include<stdio.h>
//��������
int AddTwoNum(int a,int b);

int main()
{
	int result;
	int num=10;
	result = num*(AddTwoNum(10,AddTwoNum(3,4)));//����Ƕ�׵��� 
	printf("%d\n",result) ;
	
	
	
	return 0;
} 
int AddTwoNum(int a,int b)
{
	int iTempResult;
	iTempResult = a+b;
	return iTempResult;
 } 















/* 
void DrinkMilk(char* cBottle);		//�������� 

int main()
{
	char cPoke[]="";
	printf("Mother wanna give the bady:");
	scanf("%s",&cPoke);
	DrinkMilk(cPoke);
	return 0;
} 
void DrinkMilk(char* cBottle)
{
	printf("The Body drink the %s\n",cBottle);
 } 
*/ 
 

/* 
#include<stdio.h>
char ShowChar();

int main()
{
	char cResult;
	cResult = ShowChar();
	printf("%c\n",cResult);	//����ת�� 
	return 0;
}
char ShowChar()
{
	int iNumber;
	printf("Please input a number:\n");
	scanf("%d",&iNumber);
	return iNumber;
}
*/
 
