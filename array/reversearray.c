#include<stdio.h>
int reversearray(){

  int arr[5];

  for (int i;i<=4;i++){
    printf("\n Enter element number %d",i+1);
    scanf("%d",&arr[i]);

  }

  //for printing array reverse
  for(int i=4;i>=0;i--){
    printf("%d",arr[i]);
  }
  return 0;
}
