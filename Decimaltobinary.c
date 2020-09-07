#include <stdio.h>
int binary(int);
int main(void) 
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int b =binary(x);
	printf("\nThe answer is:%d",b);
	return 0;
}
int binary(int j)
{
    int x=0,i=1,bin=0;
    while(j!=0)
    {
        x=j%2;
        bin=bin+x*i,
        i=i*10;
        j=j/2;
    }
    return (bin);
}
