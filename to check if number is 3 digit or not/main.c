#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num>99 && num<1000)
    {
        printf("%d is a three digit number\n",num);
    }
    else
    {
        printf("%d is not a three digit number\n",num);
    }

}
