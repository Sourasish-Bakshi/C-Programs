#include<stdio.h>
int main()
{
	int a[30],i,range;
	int *p;
	p=&a[0];
	printf("\n Input the range of an array please:\n");
	scanf("%d",&range);
	printf("\n Enter the elements of an array please:");
	for(i=0;i<range;i++)
	{
	    scanf("%d",p);
	    p++;
    }
    p=&a[range-1];
    printf("\n The Elements Of The Array In Reverse Order:");
    for(i=range-1;i>=0;i--)
    {
    	printf("%d\n",*p);
    	p--;
	}
	return 0;
}
