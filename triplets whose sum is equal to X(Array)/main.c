#include <stdio.h>
//count the numbers of triplets whose
//sum is equal to the given value x

int main()
{
    int arr[8]={2,8,4,7,6,5,1,3};
    int count=0;
    int x=10;

    for(int i=0;i<=7;i++)
    {
        for(int j=i+1;j<=7;j++)
        {
            for(int k=j+1;k<=7;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {count++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",count);
}
