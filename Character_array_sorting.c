#include<stdio.h>
#include<string.h>
int main()
{
    char *a[3]={"abc","deh","bac"};
	char *temp;
	int i,j,k;
	printf("\n The Original Array:");
	for(i=0;i<3;i++)
	    printf("%s\t",a[i]);
	printf("\n");
	printf("\n The Sorted Array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
		    k=strcmp(a[j],a[j+1]);
		if(k>0) 
		  {
		  	temp=a[j];
		  	a[j]=a[j+1];
		  	a[j+1]=temp;
		  }
	    }
	}    
	for(i=0;i<3;i++)
	    printf("%s\t",a[i]);
	return 0;    
}
