//Given an array of marks of 10 students,if the marks of any student is less than 35 print
//its roll number.[roll number here refers to the index of the array
#include<stdio.h>
int main(){

  int marks[10];
  for(int i=0;i<=9;i++){
        printf("Enter marks for student %d \n",i+1);
        scanf("%d",&marks[i]);

  }
  for(int i=0;i<=9;i++){
    if(marks[i]<35){

      printf("%d ",i);
    }

  }
  return 0;



  }


