#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number to check if its odd or even\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }
    return 0;
}
