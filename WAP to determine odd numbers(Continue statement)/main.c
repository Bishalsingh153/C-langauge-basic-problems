#include<stdio.h>//using continue statement
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d\n",i);
    }
}
