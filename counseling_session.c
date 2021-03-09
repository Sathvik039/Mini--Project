#include<stdio.h>
#include<stdlib.h>
 void counseling(int num_of_students)
 {
     struct student *adm;
     adm=(struct student*)malloc(sizeof(struct student)*num_of_students);
     FILE *p;
     FILE *P;
     int a=2;
     int b=5;
     int c=5;
     int d=5;
     int e=5;
     int r;
     int i=0;
     int w;
     int ch;
     int k=1;
     p=fopen("sorted_data.bin","r");
    printf("\n\n\n\t\t\tWELCOME TO THE COUNSELING SESSION");
    printf("\n\t\t\t* * * * * * * * * * * * * * * * *");
    if(p==NULL)
    {
        printf("\nNO STUDENT ALLOWED TO COUNSELING");
        exit(1);
    }
    while(1)
    { 
        r=fscanf(p,"%s\t%s\t%d\t%f\t%s\n",&(adm[i].name),&(adm[i].place),&(adm[i].rank),&(adm[i].inter_percntage),&(adm[i].phone_number));
        if (r==-1)
        {
            break;
        }
        k=1;
        while(k)
        {
        printf("\n\n\n\tDEPARTMENT AVAILABLE FOR THE COURSE B.E/B.Tech\n\t1.CSE %d\t2.ECE %d\t3.INF %d\t4.EEE %d\t5.CIVIL %d",a,b,c,d,e);
        printf("\n\tENTER 1. TO ELECT CSE\n\tENTER 2. TO ELECT ECE\n\tENTER 3. TO ELECT IT\n\tENTER 4. TO ELECT EEE\n\tENTER 5. TO ELECT CIVIL\n");
        printf("%s ELECT YOUR CHOICE",adm[i].name);
            scanf("%d",&w);
        switch(w)
        {
            case 1:
            {
                if(a==0)
                {
                    printf("CSE SEATS ARE NOT AVAILABLE\n");
                    printf("IF HE/SHE INTRESTED IN OTHER DEPARTMENT ENTER 1. IF NOT ENTER 2.");
                    scanf("\n%d",&ch);
                    if(ch==1)
                    {
                        k=1;
                        break ;
                    }
                    else if(ch==2)
                    {
                        k=0;
                    }
                    else
                    {
                        printf("INVALID INPUT\n");
                    }
                }
                else
                {
                    a=a-1;
                    k=0;
                    printf("\n\t\t%s ELECTED CSE COURSE",adm[i].name);
                    P=fopen("admission_students.csv","r");
                    if(P==NULL)
                    {
                        P=fopen("admission_students.csv","w");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    else
                    {
                         P=fopen("admission_students.csv","a");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    
                }
                break;
            }
            case 2:
            {
                if(b==0)
                {
                    printf("ECE SEATS ARE NOT AVAILABLE\n");
                    printf("IF HE/SHE INTRESTED IN OTHER DEPARTMENT ENTER 1. IF NOT ENTER 2.");
                    scanf("\n%d",&ch);
                    if(ch==1)
                    {
                        k=1;
                    }
                    else if(ch==2)
                    {
                        k=0;
                    }
                    else
                    {
                        printf("INVALID CHOICE\n");
                    }
                    
                }
                else
                {
                    b=b-1;
                    k=0;
                    printf("\t%s ELECTED ECE COURSE",adm[i].name);
                     P=fopen("admission_students.csv","r");
                    if(P==NULL)
                    {
                        P=fopen("admission_students.csv","w");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    else
                    {
                         P=fopen("admission_students.csv","a");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                }
                break;
            }
            case 3:
            {
                if(c==0)
                {
                    printf("IT SEATS ARE NOT AVAILABLE\n");
                    printf("IF HE/SHE INTRESTED IN OTHER DEPARTMENT ENTER 1. IF NOT ENTER 2.");
                    scanf("\n%d",&ch);
                    if(ch==1)
                    {
                        k=1;
                    }
                    else if(ch==2)
                    {
                        k=0;
                    }
                    else
                    {
                        printf("Invalid input\n");
                    }
                    
                }
                else
                {
                    c=c-1;
                    k=0;
                    printf("\t%s elected IT course",adm[i].name);
                     P=fopen("admission_students.csv","r");
                    if(P==NULL)
                    {
                        P=fopen("admission_students.csv","w");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    else
                    {
                         P=fopen("admission_students.csv","a");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                }
                break;
            }
            case 4:
            {
                if(d==0)
                {
                    printf("EEE seats are not available\n");
                    printf("IF HE/SHE INTRESTED IN OTHER DEPARTMENT ENTER 1. IF NOT ENTER 2.");
                    scanf("\n%d",&ch);
                    if(ch==1)
                    {
                        k=1;
                    }
                    else if(ch==2)
                    {
                        k=0;
                    }
                    else
                    {
                        printf("Invalid input\n");
                    }
                }
                else
                {
                    d=d-1;
                    k=0;
                    printf("\t%s elected EEE course",adm[i].name);
                     P=fopen("admission_students.csv","r");
                    if(P==NULL)
                    {
                        P=fopen("admission_students.csv","w");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    else
                    {
                         P=fopen("admission_students.csv","a");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                }
                break;
            }
            case 5:
            {
                if(e==0)
                {
                    printf("CIVIL seats are not available\n");
                    printf("IF HE/SHE INTRESTED IN OTHER DEPARTMENT ENTER 1. IF NOT ENTER 2.");
                    scanf("\n%d",&ch);
                    if(ch==1)
                    {
                        k=1;
                    }
                    else if(ch==2)
                    {
                        k=0;
                    }
                    else
                    {
                        printf("Invalid input\n");
                    }
                }
                else
                {
                    e=e-1;
                    k=0;
                    printf("\t%s ELECTED CIVIL COURSE",adm[i].name);
                     P=fopen("admission_students.csv","r");
                    if(P==NULL)
                    {
                        P=fopen("admission_students.csv","w");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                    else
                    {
                         P=fopen("admission_students.csv","a");
                        fprintf(P,"%s,%s,%d,%f,%s\n",(adm[i].name),(adm[i].place),(adm[i].rank),(adm[i].inter_percntage),(adm[i].phone_number));
                    }
                }
            
            break;
            }
            default :
            {
                printf("invalid choice\n");
                break ;
            }
        }
        if(a==0 && b==0 && c==0 && d==0 && e==0)
        {
            printf("\t\t\t\t\t\t\t\tN0 SEATS ARE AVAILABLE");
        }

    }
   i=i+1;
    }
fclose(p);
 return ;
 }       
 