#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number to print its absolute value\n");
    scanf("%d",&num);

    if(num<0)
    {
        num=num*(-1);
    }

    printf("The absolute value is : %d",num);
}
