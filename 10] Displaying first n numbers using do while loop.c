/*
Code : To Displaying first n numbers using do while loop
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//10] Displaying first n numbers using do while loop
void main(){
    int n,i=0;
    printf("enter n : ");
    scanf("%d",&n);

    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}