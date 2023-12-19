/*
Code : To subtract two 2D arrays
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//18] To subtract two 2D arrays
void main(){
    int a[2][2],b[2][2],c[2][2];

    printf("Enter the values for a:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a);
        }
    }
    printf("Enter the values for b:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             printf("%d\t",c[i][j]);
        }
    }
}