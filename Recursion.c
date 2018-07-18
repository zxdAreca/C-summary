/*函数的递归调用*/
#include<stdio.h>
void DisplayNames(char* cNameArray)

char* cNames[]=
{
	"Aaron",
	"Jim",
	"Charles",
	"Sam",
	"Ken",
	"end"
};
int main()
{
	
}

void DisplayNames(char** cNameArray)
{
	if(cNameArray=='end')
	{
		return;
	}
	else
	{
		DisplayNames(cNameArray+1);
		printf("%s\n",cNameArray);
	}
}
