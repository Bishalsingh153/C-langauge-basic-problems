#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&length);
    int breadth;
     printf("Enter the breadth of the rectangle\n");
    scanf("%d",&breadth);

    int area_of_rectangle=length*breadth;
    int perimeter_of_rectangle=2*(length+breadth);

    if(area_of_rectangle>perimeter_of_rectangle)
    {
        printf("Area of rectangle %d is greater than the perimeter\n",area_of_rectangle);
    }
    else if(area_of_rectangle==perimeter_of_rectangle)
    {
        printf("Both are equal");
    }
    else {
        printf("Perimeter of rectangle %d is greater than area of rectangle\n",perimeter_of_rectangle);
    }
    return 0;
}
