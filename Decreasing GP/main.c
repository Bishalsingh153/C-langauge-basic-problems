#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Enter your number\n");
    scanf("%f",&n);
    float a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%f\n",a);
        a=a*0.5;
    }
}
















/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=100;
    for(int i=1;a>0;i++)
    {
        printf("%f\n",a);
        a=a*0.5;
    }
}
*/

