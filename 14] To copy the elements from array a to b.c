/*
Code : To copy the elements from array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//14] To copy the elements from array
void main(){
    int a[6],b[6];
    
    printf("Enter values:\n");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++){
        b[i]=a[i];
    }
    printf("Array b is:\n");
    for(int i=0;i<6;i++){
        printf("%d\t",b[i]);
    }
}