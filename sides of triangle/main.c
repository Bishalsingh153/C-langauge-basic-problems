#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the 1st side\n");
    scanf("%d",&a);
    printf("Enter the 2nd side\n");
    scanf("%d",&b);
    printf("Enter the 3rd side\n");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}
