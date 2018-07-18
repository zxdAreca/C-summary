#include<stdio.h>
void DrinkMilk(char* cBottle)
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

/* 
#include<stdio.h>
char ShowChar();

int main()
{
	char cResult;
	cResult = ShowChar();
	printf("%c\n",cResult);	//ÀàÐÍ×ª»» 
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
 
