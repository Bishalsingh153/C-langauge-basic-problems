
#include <stdio.h>

//second largest element in the array but in one pass....it could also be done limit library's  INT_MIN function

int main()
{
   int arr[7]={-1,3,4,-8,19,231,12};
    int max = arr[0];
    int smax=arr[0];

    for(int i=0;i<=6;i++)
    {
        if(max<arr[i])
        {
            smax=max;//smax is now previous max
            max=arr[i];//max is now a new max
        }
        else if(smax<arr[i]&&max!=arr[i]){  //yeh tabhi hoga jab max>arr[i]
         smax=arr[i];
        }
    }

    printf("The second largest element is %d\nThe largest element is %d ",smax,max);
}
