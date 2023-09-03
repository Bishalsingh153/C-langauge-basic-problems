#include <stdio.h>//minimum element in the array
int main()
{
    int arr[10]={2,9,982,-13334,134,-89,0,56,78,3};
    int min=arr[0];

    for(int i=1;i<=9;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }

    }
    printf("%d",min);
}

