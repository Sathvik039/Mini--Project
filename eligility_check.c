#include<stdio.h>
#include<stdlib.h>
void eligibility(int k,struct student *e)
{
    FILE *p;
    p=fopen("eligible_for_admission.bin","r");
    
    if ((e->inter_percntage)>=k)
    {
        printf("\t%s IS ELIGIBLE\n",e->name);
        if(p==NULL)
        {
            p=fopen("eligible_for_admission.bin","w");
            fprintf(p,"%s\t%s\t%d\t%f\t%s\n",e->name,e->place,e->rank,e->inter_percntage,e->phone_number);
        }
        else
        {
            p=fopen("eligible_for_admission.bin","a");
            fprintf(p,"%s\t%s\t%d\t%f\t%s\n",e->name,e->place,e->rank,e->inter_percntage,e->phone_number);
        }
    }
    else
    {
        printf("\t%s IS NOT ELGIBILE\n",e->name);
    }
    fclose(p);
    return ;

}
