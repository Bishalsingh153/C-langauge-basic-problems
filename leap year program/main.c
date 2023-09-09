#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter your year to check\n");
    scanf("%d",&year);


      if(year % 4==0)
     {
         printf("%d is a leap year",year);
     }
     else if(year % 100!=0)
     {
         printf("%d is not a leap year",year);
     }
     else if(year % 400==0)
     {
         printf("%d is a leap year",&year);
     }

    return 0;
}
