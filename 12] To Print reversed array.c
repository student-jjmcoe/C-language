/*
Code : To Print reversed array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//12] To Print reversed array
void main(){
    int arr[5],i;

    printf("Enter values:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reversed array is:\n");
    for(int i=4;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}