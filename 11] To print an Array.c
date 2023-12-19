/*
Code : To print an Array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//11]To print an Array
void main(){
    int arr[5];
    
    printf("Enter Values:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array is: ");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}