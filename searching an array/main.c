#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7]={21,12,31,45,22,99,55};
    int idx=-1;
    int x=21;
    bool flag=false;//here false means not present

    for(int i=0;i<=6;i++)

    {
        if(arr[i]==x)
        {
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else
    {
        printf("%d is present in the array at index %d",x,idx);
    }
    return;
}
