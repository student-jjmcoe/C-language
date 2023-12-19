/*
Code : To copy the elements from 2D array a in b
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//15] To copy the elements from 2D array a in b
void main(){
   int a[3][2],b[3][2];

   printf("Enter values:\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    scanf("%d",&a[i][j]);
    }
   } 
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        b[i][j]=a[i][j];
    }
   }
   printf("Array b is:\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    } 
}