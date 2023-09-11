#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;
   int c;
   int d;

   printf("Enter 1st number\n");
   scanf("%d",&a);
   printf("Enter 2nd number\n");
   scanf("%d",&b);
   printf("Enter 3rd number\n");
   scanf("%d",&c);
   printf("Enter 4th number\n");
   scanf("%d",&d);

   if(a>b && a>c && a>d)
   {
       printf("\n%d is the greatest\n",a);
   }
   if(b>a && b>c && b>d)
   {
       printf("%d is the greatest\n",b);
   }
   if(c>a && c>b && c>d)
   {
       printf("%d is the greatest\n",c);
   }
   if(d>a && d>b && d>c)
   {
       printf("%d is the greatest\n",d);
   }



}
