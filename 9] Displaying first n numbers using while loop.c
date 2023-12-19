/*
Code : To Displaying first n numbers using while loop 
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 9] Displaying first n numbers using while loop
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}