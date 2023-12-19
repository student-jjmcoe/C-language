/*
Code : Array operations 
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//28] Array operations
void main(){
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++){
        printf("%d\t",*p);
        p++;
    }
} 