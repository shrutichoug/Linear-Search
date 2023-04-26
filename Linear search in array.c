#include <stdio.h>
#include <stdlib.h>

int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
int main()
{
    int i =0;
    int n;
    printf("enter No.\n");
    scanf("%d",&n);
      if(n>arr[10]){printf("dne");return -1;}
      for(i;i<9;i++){
          if(arr[i] == n){
                    printf("%d",i);break;}
          if(i==10){printf("Not Found");}}
  	
  return 0;
}