#include<stdio.h>
int main()
{
	char str1[30], str2[30], str3[90];
	int i,j,k=0;
	printf("Enter the String1\n");
	gets(str1);
	printf("Enter the String2\n");
	gets(str2);
	for(i=0; str1[i]!='\0'; i++)
	{
		str3[k]=str1[i];
		k++;
	}
	for(j=0; str2[j]!='\0'; j++)
	{
		str3[k]=str2[j];
		k++;
	}
	str3[k]='\0';
	printf("Concatenated string is: %s\n",str3);
	char a[20], b[20];
	int m,n;
	printf("Enter the string 1\n");
	gets(a);
	for(m=0; a[m]!='\0'; m++)
	{
		b[n]=a[m];
		n++;
	}
	b[n]='\0';
	printf("The copied string is: %s\n",b);
}
