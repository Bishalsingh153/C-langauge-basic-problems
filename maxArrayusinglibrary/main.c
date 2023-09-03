#include<stdio.h>
#include<limits.h>

int main(){
int arr[7]={7,9,232,345,52,90,1356782};

int max=INT_MIN;

for(int i=0;i<=6;i++)
{
    if(max<arr[i]){
        max=arr[i];
    }

}
printf("%d",max);

}
