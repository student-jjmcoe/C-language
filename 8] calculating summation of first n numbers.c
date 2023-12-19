/*
Code : To calculate summation of first n numbers
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 8] calculate summation of first n numbers
void main(){
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Summation of first n numbers is= %d",sum);
} 