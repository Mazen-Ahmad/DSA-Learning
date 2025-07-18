#include<stdio.h>
void namaste();
void bonjour();

void namaste()
{
    printf("NAMASTE");
}
void bonjour()
{
    printf("BONJOUR");
}

int main()
 {
    char ch;
    printf("Enter I for Indian, F for French");
    scanf("%c",&ch);
    if(ch=='I')
    {
    namaste();
    }
    else if(ch =='F')
    {
    bonjour();
    }
    return 0;
}