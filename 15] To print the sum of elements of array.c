/*
Code : To print the sum of elements of array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//15] To print the sum of elements of array
void main(){
    int arr[6],sum=0;

    printf("Enter values:\n");
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<6;i++){
        sum=sum+arr[i];
    }
    printf("Sum of all elements of array is = %d",sum);
} 