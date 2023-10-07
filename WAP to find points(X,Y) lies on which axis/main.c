#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, y;
   printf("Enter X and Y coordinates\n");
   scanf("%d %d",&x,&y);

   if(x==0 && y==0)
   {
       printf("Point is origin");
   }
   else if(x==0)
   {
       printf("Point lies on y axis");
   }
   else if(y==0)
   {
       printf("Point lies on x axis");
   }
   else{
    printf("Point doesn't lies on x axis and y axis");
   }
   return 0;

   }
