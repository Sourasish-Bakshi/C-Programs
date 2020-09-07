#include <stdio.h>
int power(int,int);
int main(void) 
{
	int x,r,i;
	printf("Enter the number:\n");
	scanf("%d",&x);
	printf("Enter the power:\n");
	scanf("%d",&r);
	int p=x;
	for(i=1;i<r;i++)
	{
	    p=power(p,x);
	}
	printf("The answer is:%d",p);
	return 0;
}
int power(int a,int b)
{
    return((a*b));
}
