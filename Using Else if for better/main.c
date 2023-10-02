#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the percentage to get the grade\n");
    scanf("%d",&n);

    if(n>80)
    {
        printf("A grade\n");
    }
    else if(n>60)
    {
        printf("B grade\n");
    }
    else if(n>40)
    {
        printf("C grade\n");
    }
    else
    {
        printf("D grade\n");
    }

    return 0;
}
