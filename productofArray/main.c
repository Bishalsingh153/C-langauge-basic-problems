#include<stdio.h>
int main()
{

    int arr[6]={2,3,6,7,8,5};
    int product=1;

    for(int i=0;i<=5;i++){
        product=product*arr[i];
    }
    printf("%d",product);
}
