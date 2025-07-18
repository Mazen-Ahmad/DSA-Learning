#include<stdio.h>
int main()
{
    int mks;
    printf("enter the marks");
    scanf("%d",&mks);
    if(mks>=30)
    printf("PASS");
    else if(mks<30)
    printf("FAIL");
    return 0;
}