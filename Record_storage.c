#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct course
{
    int marks;
    char subject[20];
};
void main()
{
    struct course *ptr;
    int i,n;
    printf("\n Enter the number of records :");
    scanf("%d",&n);
    ptr=(struct course*)malloc(n*sizeof(struct course));
    for(i=0;i<n;i++)
    {
        printf("\nInformation of subject %d:",i+1);
        printf("\nEnter the subject name:");
        scanf("%s",&(ptr+1)->subject);
        printf("\nEnter the marks:");
        scanf("%d",&(ptr+1)->marks);
    }
    printf("\nDisplaying the information:");
    for(i=0;i<n;i++)
    {
        printf("\nInformation of subject %d:",i+1);
        printf("\nSubject:%s",(ptr+1)->subject);
        printf("\nMarks:%d",(ptr+1)->marks);
    }

    getch();
}
