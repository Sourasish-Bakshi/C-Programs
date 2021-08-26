#include<stdio.h>
int largest(int *,int *,int *);
int main()
{
	int num1,num2,num3,*p1,*p2,*p3,n;
	printf("\n Enter Three Numbers Please:\n");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	p1=&num1;
	p2=&num2;
	p3=&num3;
	n=largest(p1,p2,p3);
	printf("\n The Lagest Number is %d",n);
	return 0;
}
int largest(int*p1,int *p2,int *p3)
{
	if(*p1>*p2)
	{
		if(*p1>*p3)
		    return (*p1);
		else
		    return (*p3);    
	}
	else
	{
		if(*p2>*p3)
		    return (*p2);
		else
		    return(*p3);
	}
}
