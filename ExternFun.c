#include<stdio.h>

extern char* GetString(char* pString);
extern void ShowString(char* pString);
int main()
{
	char* pMyString;
	pMyString=GetString("hello!");
	ShowString(pMyString);
}
