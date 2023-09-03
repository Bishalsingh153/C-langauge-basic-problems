#include<stdio.h>
int main()
{
    int arr[7]={12,25,73,43,51,61,12};

    for(int i=0;i<=6;i++)
        {
        for(int j=i+1;j<=6;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }

}
