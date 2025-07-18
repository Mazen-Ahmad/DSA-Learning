#include<stdio.h>
int main()
{
    char f;
    printf("Enter the character");
    scanf("%c",&f);
    if (f>='A'&&f<='Z')
    printf("CHARACTER IS UPPERCASE");
    else
    printf("CHARACTER IS NOT UPPERCASE");
    return 0;
}