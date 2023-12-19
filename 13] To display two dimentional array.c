/*
Code : To display two dimentional array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//13] To display two dimentional array
void main(){
    int arr[3][3];

    printf("Enter values :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2D array is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        } printf("\n");
    }
}