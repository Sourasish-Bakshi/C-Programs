#include<stdio.h>
#include<conio.h>
#include<string.h>
struct s
{
    char name[100];
    int roll;
    int number;
};
void average(struct s stud[],int n)
{
    int i=0;
    int a=0;
    int avg=0;
    for(i=0;i<n;i++)
    a=a+stud[i].number;
    avg=(a/n);

     printf("\n\n The average is %d",avg);
 }
void main()
{
    struct s student[100];
    int i,m;
    printf("Enter the no. of students:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("\n Enter the information of student %d",i+1);
        printf("\n Enter the name:");
        scanf("%s",student[i].name);
        printf("\n Enter the roll number:");
        scanf("%d",&student[i].roll);
        printf("\n Enter the marks:");
        scanf("%d",&student[i].number);
    }
    printf("\n\n The informations are:\n\n");
    for(i=0;i<m;i++)
    {
        printf("\n For %d student",i+1);
        printf("\n Name:");
        puts(student[i].name);
        printf("\n Roll: %d",student[i].roll);
        printf("\n Marks: %d",student[i].number);
    }
    average(student,m);

    getch();
}
