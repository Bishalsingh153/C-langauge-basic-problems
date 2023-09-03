#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7]={3,6,42,-442,93,1,0,3};
    int min=INT_MAX;

    for(int i=0;i<=6;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
}
