//taking size of array as input from the user and then taking the elements as inputs and eventually printing it
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is ");

    for(int i=0;i<=n-1;i++){
        printf(" %d",arr[i]);
    }


}
