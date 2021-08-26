#include<stdio.h>
#include<string.h>
char str_cpy(char *a,char *b)
{
	char *p=a;
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*a='\0';
	printf("\nThe copied string is:");
	puts(p);
}
int str_len(char *s)
{
	int i,length=0;
	for(i=0;s[i]!='\0';i++)
		length++;
	printf("\nThe length is: %d",length);	
}
int main()
{
	char str1[100],str2[100];
	printf("Enter a string:");
	gets(str1);
	str_cpy(str2,str1);
	str_len(str1);
}
