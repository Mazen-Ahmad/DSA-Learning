#include<stdio.h>
int main()
{
    float n,m;
    printf("Enter the 2 no.(s)\n");
    scanf("%f %f",&n,&m);
    char ch;
    printf("Enter S for sum, P for product, D for difference, B for Division");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'S':
        {
        printf("Sum is: %f",(n+m));
        break;
        }
        case 'P':
        {
            printf("Product is: %f",(n*m));
            break;
        }
        case 'D':
        {
            printf("Difference is: %f",(n-m));
            break;
        }
        case 'B':
        {
            printf("Division is: %f",(n/m));
            break;
        }
        }
    return 0;
}

    