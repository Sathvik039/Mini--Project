#include"Registration.c"
#include"eligility_check.c"
#include"sorting_and_checking.c"
#include"counseling_session.c"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10];
    float k;
    printf("\t\t\t\t\tWELCOME TO UNIVERSITY REGISTRATION\n\t\t\t\t\t* * * * * * * * * * * * * * * * * *");
    printf("\n\n\t\t\tADMISSION ARE OPEN");
    while(1)
    {
        printf("\n\n\tENTER 1 FOR REGISTRATION\n");
        printf("\tENTER 2 FOR END OF REGISTRATION PROCESS \n");
        scanf("%s",&a);
        if(a[0]=='2')
        {
            printf("\t\t\t\t\tTHE REGISTRATION DATE AND TIME COMPLETED\n");
            break;
        }
        switch(a[0])
        {
            case '1':
            {
                registration();
                printf("\n\n");
                break;
            }
            case '2':
            {
                break;
            }
            default :
            {
                printf("INVALID INPUT");
            break;
            }
        }
    }
        FILE *p;
         p=fopen("data.bin","r");
    if(p==NULL)
    {
        printf("\t\tNO STUDENT REGISTERTED");
        exit(1);
    }
    printf("\n\nENTER MINIMUM INTER PERCENTAGE   :");
    scanf("%f",&k);
    int num_of_students=0;
    while(1)
    {
        struct student *e;
        e=(struct student*)malloc(sizeof(struct student));
        int t=fscanf(p,"%s\t%s\t%d\t%f\t%s",&e->name,&e->place,&e->rank,&e->inter_percntage,&e->phone_number);
        if(t==-1)
        {
            break;
        }
        eligibility(k,e);
        num_of_students=num_of_students+1;
    }
    fclose(p);
    printf("\t \tTHE REESPECTIVE COUNSELING DATE AND TIME WAS ALLOTED TO THE STUDENTS \n");
    printf("\n\n\n\n\t\t\t\t\tONE THE COUNSELING DAY\n");
    printf("\t\t\t\t\t * * * * * * * * * * *\n");
    arrange(num_of_students);
    printf("\tSTUDENTS ARRANGED ACCORDING THIER RANK WISE THEY ARE READY FOR COUNSELING\n");
    counseling(num_of_students);
    return 0;
}
