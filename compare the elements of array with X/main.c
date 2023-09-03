#include <stdio.h>
//count the number of elements in given array greater than a given number x

int main()
{
    int x=45;
    int count=0;
    int arr[10]={23,45,11,45,78,66,88,65,87,75};

    for(int i=0;i<=9;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    printf("The count of greater number than %d is %d",x,count);
}

