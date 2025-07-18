#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number=rand()%100+1;    
    int n;
    printf("guess the number, its between 1-100\n");
    scanf("%d",&n);
    while(n!=number)
    {
     if(n<number)
     {
        printf("wrong, guess higher\n");
        scanf("%d",&n);
     }
     else if(n>number)
     {
        printf("wrong, guess lower\n");
        scanf("%d",&n);
     }
    }
    printf("sahi jawab, 7 CRORE");
    return 0;
}