#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<=n;i++)

    {
        printf("%d\n",a);
        a=a*2;
    }
}
