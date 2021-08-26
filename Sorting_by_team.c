#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
    char player_name[20];
    char team_name[10];
    int batting_average;
};
int main()
{
    struct cricket player[50],t;
    int i,j;
    int p;
    for(i=0;i<50;i++)
    {
        printf("\n For player %d:",i+1);
        printf("\n Enter the player name:");
        scanf("%s",&player[i].player_name);
        printf("\n Enter the team name:");
        scanf("%s",&player[i].team_name);
        printf("\n Enter the batting average:");
        scanf("%d",&player[i].batting_average);
    }
    for(i=1;i<50;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(player[j-1].team_name,player[j].team_name)>0)
            {
                t=player[j-1];
                player[j-1]=player[j];
                player[j]=t;
            }
        }
    }
    printf("\n PLayer list: ");
    for(i=0;i<50;i++)
    {
    printf("\n %s %s %d",player[i].player_name,player[i].team_name,player[i].batting_average);
    }
    return 0;
    getch();
}
