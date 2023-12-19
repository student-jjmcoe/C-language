/*
Code : To pass 2D array through function
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//22] To pass 2D array through function
void display(int num[2][3]){
    printf("2D array :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int d[2][3]={1,2,3,4,5,6};
    display(d);
}
