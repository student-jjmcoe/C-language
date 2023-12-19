#include<stdio.h>
void main(){
  int a[15],count=0;
  printf("Enter The data to send in 0 & 1:\n");
  for(int i=0;i<15;i++){
    scanf("%d",&a[i]);
  }
  printf("After bit stuffing:\n");
  for(int i=0;i<15;i++){
    if(a[i]==1){
    count++;
    printf("%d",a[i]);

    if(count==5){
    printf("0");
    count=0;
    }}
    else{
      printf("%d",a[i]);
      count=0;
    }
    
  }
}