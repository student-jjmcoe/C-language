#include<stdio.h>
void main(){
  int dw[4];
  int cw[7];
  
  printf("Enter the dataword in 0's & 1's\n");
  for(int i=0;i<4;i++){
    scanf("%d",&dw[i]);
  }
  cw[4]=dw[0]^dw[1]^dw[2];
  cw[5]=dw[1]^dw[2]^dw[3];
  cw[6]=dw[2]^dw[3]^dw[0];

  for(int i=0;i<4;i++){
    cw[i]=dw[i];
  } 
  printf("After hamming code:\n");
  for(int i=0;i<7;i++){
    printf("%d",cw[i]);
  }
}