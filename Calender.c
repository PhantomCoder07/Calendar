#include <stdio.h>
int for_first_day (int year)
{
    int day=1;
    for (int i=1; i<year; i++)
    {
        if (year%400==0 || (year%100!=0 && year%4==0))
            day=(day+2)%7;
        else
            day=(day+1)%7;
    }
    return day+1;
}
void for_31 (int *m)
{
    int n=1;
    printf ("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (i==0 && j<*m)
            {
                printf ("    ");
            }
            else if (n<=31)
            {
                printf (" %02d ",n++);
                *m=j+1;
            }
        }
        printf ("\n");
        if (n==32)
            break;
    }
    printf("\n");
}
void for_28 (int *m)
{
    int n=1;
    printf ("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (i==0 && j<*m)
            {
                printf ("    ");
            }
            else if (n<=28)
            {
                printf (" %02d ",n++);
                *m=j+1;
            }
        }
        printf ("\n");
        if (n==29)
            break;
    }
    printf("\n");
}
void for_29 (int *m)
{
    int n=1;
    printf ("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (i==0 && j<*m)
            {
                printf ("    ");
            }
            else if (n<=29)
            {
                printf (" %02d ",n++);
                *m=j+1;
            }
        }
        printf ("\n");
        if (n==30)
            break;
    }
    printf("\n");
}
void for_30 (int *m)
{
    int n=1;
    printf ("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (i==0 && j<*m)
            {
                printf ("    ");
            }
            else if (n<=30)
            {
                printf (" %02d ",n++);
                *m=j+1;
            }
        }
        printf ("\n");
        if (n==31)
            break;
    }
    printf("\n");
}
int main()
{
    int year;
    printf ("Enter The Year: ");
    scanf ("%d",&year);
    int m=for_first_day(year);
    printf ("The Calendar of The Year - %d\n\n",year);
    printf ("%27s\n","January");
    for_31(&m);
    if (year%400==0 || (year%100!=0 && year%4==0))
    {
        printf ("%27s\n","February");
        for_29(&m);
    }
    else
    {
        printf ("%27s\n","February");
        for_28(&m);
    }
    printf ("%27s\n","March");
    for_31(&m);
    printf ("%27s\n","April");
    for_30(&m);
    printf ("%27s\n","May");
    for_31(&m);
    printf ("%27s\n","June");
    for_30(&m);
    printf ("%27s\n","July");
    for_31(&m);
    printf ("%27s\n","August");
    for_31(&m);
    printf ("%27s\n","September");
    for_30(&m);
    printf ("%27s\n","October");
    for_31(&m);
    printf ("%27s\n","November");
    for_30(&m);
    printf ("%27s\n","December");
    for_31(&m);
    return 0;
}
