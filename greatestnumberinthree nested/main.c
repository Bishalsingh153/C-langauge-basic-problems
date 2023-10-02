#include<stdio.h>//this question is done using age
int main()
{
    int ram,shyam,ajay;

    printf("Enter the age of ram\n");
    scanf("%d",&ram);

    printf("Enter the age of shyam\n");
    scanf("%d",&shyam);

    printf("Enter the age of ajay\n");
    scanf("%d",&ajay);

    //implementation
  if(ram>shyam)
  {
      if(ram>ajay)
      {
          printf("Ram is the oldest");
      }
      else
      {
          printf("Ajay is the oldest");
      }
  }
  else
  {
      if(shyam>ajay)
      {
          printf("Shyam is the oldest");
      }
      else
      {
          printf("Ajay is the oldest");
      }
  }
}
