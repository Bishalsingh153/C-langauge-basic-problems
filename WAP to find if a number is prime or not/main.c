#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number to check if its prime or not\n");
    scanf("%d",&num);

    int a=0;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            a=1; // here a is variable where we will store the value to check later below
            break;
        }
    }
    if(num==1){printf("1 is neither prime nor composite\n");}
    else if(a==0){printf("The given number is prime\n");}
    else {printf("The given number is composite");}
}
