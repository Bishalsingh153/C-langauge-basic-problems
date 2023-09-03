#include<stdio.h>
#include<stdbool.h>

bool is_palindrome(int arr[],int size)
                   {
                       int i=0;
                       int j = size-1;

                       while(i<j){
                          if(arr[i]!= arr[j])
                          {
                            return false;
                          }
                          i++;
                          j--;
                       }
                       return true;
                   }

                   int main()
                   {
                       int arr[]={1,2,3,4,3,2,1};
                       int size=sizeof(arr)/sizeof(arr[0]);

                       if(is_palindrome(arr,size)){
                        printf("The array is palindrome");
                       }
                       else{
                        printf("The array is not a palindrome");
                       }
                       return 0;
                   }
