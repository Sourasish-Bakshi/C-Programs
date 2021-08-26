#include<stdio.h>
#include<stdlib.h>

int mul[12][12];
int tra[12][12];

void multiply(int mat1[12][12],int mat2[12][12],int m,int n,int q)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            mul[i][j]=0;
            for(k=0;k<n;k++)
            {
                mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("After Multiplication Of The Two Matrices :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
}

void transpose(int mul[12][12],int m,int q)
{
	int i,j;
	for(i=0; i<m; ++i)
	{
		for(j=0; j<q; ++j)
			tra[j][i] = mul[i][j];
	}
	printf("The Transpose Of the Multiplied Matrix : \n");
	for(i=0;i<q;i++)
        {
        	for(j=0;j<m;j++)
        	{
         	   	printf("%d",tra[i][j]);
        	}
        	printf("\n");
    	}
}
int main()
{
    int mat1[12][12],mat2[12][12];
    int i,j,k,m,n,p,q;
    printf("Enter The Number of Rows & Columns for 1st Matrix : ");
    scanf("%d%d",&m,&n);
    printf("Enter The Number of Rows & Columns for 2nd Matrix : "); 
    scanf("%d%d",&p,&q);

    if(n!=p)
	{
    		printf("Multiplication Not Possible !!""");
    		exit(0);
	}
    printf("Enter The Elements of The 1st Matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter The Elements of The 2nd Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("The 1st Matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
    }

    multiply(mat1,mat2,m,n,q);
    transpose(mul,m,q);

    return 0;
}

