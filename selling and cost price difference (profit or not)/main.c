#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp;
    printf("Enter the cost price\n");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price\n");
    scanf("%d",&sp);

    if(sp>cp)
    {
     printf("It is a profit of %d",sp-cp);
    }
    else if(sp==cp)
    {
        printf("Nor profit nor loss");
    }
    else
    {
        printf("It is a loss of %d",(sp-cp)*-1);//multiplied by -1 so that negative sign is not shown and we get the absolute value(optional)
    }
}
