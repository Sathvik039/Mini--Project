#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[30];
    char place[40];
    int rank;
    float inter_percntage;
    char phone_number[9];
};
void registration()
{struct student *s;
int a;
int k=0;
FILE *p;
p=fopen("data.bin","r");
if (p==NULL)
    {p=fopen("data.bin","w+");
    s=(struct student*)malloc(sizeof(struct student));
    printf("ENTER THE NAME  :     ");
    scanf("%s",&s->name);
    printf("\nENTER THE PLACE  : ");
    scanf("%s",&s->place);
    printf("\nENTER THE RANK    :");
    scanf("%d",&s->rank);
    printf("\nENTER THE INTER PERCENTAGE    :");
    scanf("%f",&s->inter_percntage);
    if(s->inter_percntage<0 || s->inter_percntage>100)
    {
        printf("INVALID INPUT OF PERCENTAGE");
        return ;
    }
    printf("\nENTER THE PHONE NUMBER   :");
    scanf("%s",&s->phone_number);
    if(strlen(s->phone_number)<10 || strlen(s->phone_number)>10)
    {
          printf("INVALID INUT OF NUMBER");
    }
    fprintf(p,"%s\t%s\t%d\t%f\t%s\n",s->name,s->place,s->rank,s->inter_percntage,s->phone_number);
    }
    else
    {
        p=fopen("data.bin","a");
    s=(struct student*)malloc(sizeof(struct student));
    printf("ENTER THE NAME    :   ");
    scanf("%s",&s->name);
    printf("\nENTER THE PLACE  :   ");
    scanf("%s",&s->place);
    printf("\nENTER THE RANK    :   ");
    scanf("%d",&s->rank);
    printf("\nENTER THE INTER PERCENTAGE    :   ");
    scanf("%f",&s->inter_percntage);
    if(s->inter_percntage<0 || s->inter_percntage>100)
    {
        printf("Invalid input of percentage");
        return ;
    }
    printf("\nENTER THE PHONE NUMBER   :");
    scanf("%s",&s->phone_number);
    if(strlen(s->phone_number)<10 || strlen(s->phone_number)>10)
    {
          printf("INVALID INUT OF NUMBER");
          return ;
    }
    fprintf(p,"%s\t%s\t%d\t%f\t%s\n",s->name,s->place,s->rank,s->inter_percntage,s->phone_number);
    }
    fclose(p);
    return ;
}