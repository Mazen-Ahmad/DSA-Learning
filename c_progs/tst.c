#include <stdio.h>
int validateDate(int d,int m,int y){
    if (y>=1600){
        if (m>=1 && m<=12){
            if ((d>=1 && d<=31) && (m==1 || m==3|| m==5||m==7||m==8 ||m==10||m==12))
            return 1;
            else if ((d>=1 && d<=30) && (m==6 || m==9 || m==11|| m==4))
            return 1;
            else if ((d>=1 && d<=29) && m==2 && (y%400 == 0 || (y%4==0 && y%100 != 0)))
            return 1;
            else if ((d>=1 && d<=28) && m==2)
            return 1;
            else
            return 0;
        } else
        return 0;
                   } else 
                   return 0;
}
int  main(){
       int month, year , date,s=0,i,f;
    printf("Enter Date DD/MM/YYYY\n");
    scanf("%d/%d/%d",&date, &month, &year);
    f=validateDate(date,month,year);
    if (f==1){
    char week[][12]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"};
    int m[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 400 == 0 || (year % 4==0 && year%100 != 0))
    m[1]=29;
    for (i=0;i<month-1;i++)
        s=s+m[i];
        s=s+(date+year+(year/4)-2);
        s=s%7;
        if (m[1]==29)
         s--;
        if (s==-1)
        s=6;
    printf("\nThe day is: %s", week[s]);
    } else 
    printf("Invalid Date");
return 0;
}