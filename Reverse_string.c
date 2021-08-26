#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,l;
	printf("Enter the string:\n");
	gets(str);
	l=strlen(str);
	for(i=l-1; i>=0; i--)
	{
		printf("%c",str[i]);
	}
}
