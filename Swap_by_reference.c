#include<stdio.h>
int swap(int *n,int *m)
{
	int p;
	p=*n;
	*n=*m;
	*m=p;
}
int main()
{
	int n,m;
	printf("\n Enter Two Numbers Please:\n");
	scanf("%d    %d",&n,&m);
	printf("\n Actual Numbers are %d and %d",n,m);
	swap(&n,&m);
	printf("\n After Swapping the Numbers are %d  and  %d",n,m);
	return 0;
}
