#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j;
	printf("Enter the string:\n");
	gets(str);
	printf("\nThe acronym is:\n");
	printf("%c",str[0]);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		printf("%c",str[i+1]);
	}
}

