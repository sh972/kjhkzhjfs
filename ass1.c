#include<stdio.h>

int main()
{
	char a[50];
	int i;
	printf("enter the string\n");
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
		a[i]+=32;
		else
		a[i]-32;		
	}
	printf("\n");
	for(i=0;a[i]!=0;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
