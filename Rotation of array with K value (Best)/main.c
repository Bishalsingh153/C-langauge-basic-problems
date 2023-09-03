#include<stdio.h>
void reverse(int arr[],int si, int ei)
{
    for(int i=si,j=ei; i<j; i++,j--)
    {
        int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
    }
    return;
}

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements:\n",n);
    for(int i =0; i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter K ,which is the value that shows how much rotation will take place\n");
    scanf("%d",&k);

    //int arr[7]={1,2,3,4,5,6,7};
    //int n=7;
    //int k=65;
    //steps
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n-1;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
