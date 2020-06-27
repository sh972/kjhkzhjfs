#include<stdio.h>

int main()
{
	char b[50];
	int i;
	printf("enter the string\n");
	scanf("%s",b);
	for(i=0;b[i]!=0;i++)
	{
		if((b[i]>='A')&&(b[i]<='Z'))
		b[i]+=32;
		else
		b[i]-32;		
	}
	printf("\n");
	for(i=0;b[i]!=0;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
