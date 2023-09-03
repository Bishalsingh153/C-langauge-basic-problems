#include <stdio.h>
//finding the total number of pairs in the array
//whose sum is equal to the given value x

int main()
{
int arr[8]={2,8,4,7,6,5,1,3};
   int count=0;
   int x=10;

   for(int i=0;i<=7;i++)
   {
       for(int j=i+1;j<=7;j++)
       {
           if(arr[i]+arr[j]==x)
           {
               count++;
               printf("(%d,%d)\n",arr[i],arr[j]);
           }
       }
   }
   printf("%d",count);
}
