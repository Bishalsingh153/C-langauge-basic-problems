//Sorry for long comments but its there for better understanding of the code .
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter value of x1 and y1 for point A\n");
    scanf("%d %d",&x1,&y1);

    printf("Enter value of x2 and y2 for point B\n");
    scanf("%d %d",&x2,&y2);

    printf("Enter value of x3 and y3 for point C\n");
    scanf("%d %d",&x3,&y3);



     // Check for division by zero
    if ((x2 - x1) == 0 || (x3 - x2) == 0) {
        printf("Cannot calculate slope due to division by zero\n");
        return 1; // Exit the program with an error code
    }

    //there will be six inputs for six variables where each pair represent A B and C respectively

    //now to find slope we will apply formula i.e slope 1 = y2-y1/x2-x1 and slope 2 = y3-y2/x3-x2....as there are three points A B C
    //so comparing points will be two ..one from A to B and another from B to C.

    float slope1=(float)(y2-y1)/(x2-x1);//The (float) you see is called a typecast or type conversion. It's used to explicitly convert the result of the division operation from an integer to a float. Here's why it's necessary:

//Integer Division: By default, in C, if both the numerator and denominator of a division operation are integers, the result will also be an integer. Any fractional part is truncated, not rounded. For example, if you perform 5 / 2, the result is 2, not 2.5.

//Typecasting to Float: To ensure that you get a floating-point result with the fractional part, you explicitly cast one or both operands to float. In our case, (float)(y2 - y1) / (x2 - x1) and (float)(y3 - y2) / (x3 - x2) cast the results of the divisions to floating-point numbers.
    float slope2=(float)(y3-y2)/(x3-x2);

    if(slope1==slope2)
    {
        printf("Lies on straight line\n");
    }
    else{
        printf("Does not lie on a straight line\n");
    }


}
