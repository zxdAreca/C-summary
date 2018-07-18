#include<stdio.h>
int main()
{
	int i;
	char String[7] = {"mrsoft"};
	char Reverse[7] = {0};
	int size;
	size = sizeof(String);
	printf("%d\n",size);
	
	/*Ñ­»·¶ÁÈ¡×Ö·û*/
	for(i=0;i<6;i++)
	{
		Reverse[size-i-2] = String[i];
	} 
	
	/*Êä³öÔ´×Ö·û´®*/
	printf("%s\n",String);
	/*Êä³öÔ´×Ö·û´®*/
	printf("%s\n",Reverse);
	return 0;
}
