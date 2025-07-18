#include<stdio.h>
int main()
{
    int d,m,mc,y,yc,sm,day;
    printf("Enter the date, month and year");
    scanf("%d %d %d",&d,&m,&y);
    int mod=y%100;
    int div=mod/4;
    int ny=y/100;
    for(int x=0;;x=x+4)
    {
        if(ny==(16+x))
        {
            yc=6;
            break;
        }
        else if (ny==(17+x))
        {
            yc=4;
            break;
        }
        else if(ny==(18+x))
        {
            yc=2;
            break;
        }
        else if(ny==(19+x))
        {
            yc=0;
            break;
        }
    }
    if(m==1)
    mc=0;
    else if (m==2)
    mc=3;
    else if(m==3)
    mc=3;
    else if(m==4)
    mc=6;
    else if(m==5)
    mc=1;
    else if(m==6)
    mc=4;
    else if(m==7)
    mc=6;
    else if(m==8)
    mc=2;
    else if(m==9)
    mc=5;       
    else if(m==10)
    mc=0;
    else if(m==11)
    mc=3;
    else if(m==12)
    mc=5;
    sm=d+mod+div+mc+yc;
    if(y%4==0)
    {
    day=(sm%7)-1;
    }
    else
    {
    day=(sm%7);
    }  
    if(day==0)
    printf("SUNDAY");
    if(day==1)
    printf("MONDAY");
    if(day==2)
    printf("TUESDAY");
    if(day==3)
    printf("WEDNESDAY");
    if(day==4)
    printf("THURSDAY");
    if(day==5)
    printf("FRIDAY");
    if(day==6)
    printf("SATURDAY");
    return 0;
}

    