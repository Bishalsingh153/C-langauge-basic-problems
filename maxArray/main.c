#include <stdio.h>
int main()
{
    int arr[7]={-1,3,4,-8,19,231,12};
    int max=arr[0];
    for(int i=1;i<=6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}
