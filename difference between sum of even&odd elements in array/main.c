#include <stdio.h>
int main ()
{
    int arr[7]={3,4,6,1,4,9,7};
    int sumEven=0;
    int sumOdd=0;

    for(int i=0;i<=6;i++)
    {
        if(i%2==0)
        {
            sumEven +=arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
        printf("%d",arr[i]);
    }


    printf("%d",sumEven-sumOdd);

}
