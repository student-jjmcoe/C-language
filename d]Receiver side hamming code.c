#include <stdio.h>
void main()
{
  int cw[7];
  int s1, s2, s3;

  printf("Enter the codewords:\n");
  for (int i = 0; i < 7; i++)
  {
    scanf("%d", &cw[i]);
  }
  s1 = cw[0] ^ cw[1] ^ cw[2] ^ cw[4];
  s2 = cw[1] ^ cw[2] ^ cw[3] ^ cw[5];
  s3 = cw[2] ^ cw[3] ^ cw[0] ^ cw[6];

  if (s1 == 0 && s2 == 0 && s3 == 0)
  {
    printf("recieved codeword is correct\n");
  }
  else
  {
    // 1]
    if (s1 == 0 && s2 == 1 && s3 == 0)
    {
      if (cw[1] == 0)
      {
        cw[1] = 1;
      }
      else
      {
        cw[1] = 0;
      }
    } // 2]
    if (s1 == 0 && s2==0 &&s3==1){
      if(cw[6]==0){
        cw[6]=1;
      }
      else{
        cw[6]=0;
      }
    }
    if(s1==0 && s2==1 && s3==1){
      if(cw[5]==0){
        cw[5]=1;
      }
      else{
        cw[5]=0;
      }
    }
    if(s1==1 && s2==0 && s3==0){
      if(cw[4]==0){
        cw[4]=1;
      }
      else{
        cw[4]=0;
      }
    }
    if(s1==1 && s2==0 && s3==1 ){
      if(cw[3]==0){
        cw[3]=1;
      }
      else{
        cw[3]=0;
      }
    }
    if(s1==1 && s2==1 && s3==0){
      if(cw[0]==0){
        cw[0]=1;
      }
      else{
        cw[0]=0;
      }
    }
    if(s1==1 && s2==1 && s3==1){
      if(cw[2]==0){
        cw[2]=1;
      }
      else{
        cw[2]=0;
      }
    }
  }
  printf("correct codeword\n");
  for(int i=0;i<7;i++){
    printf("%d",cw[i]);
  }
}