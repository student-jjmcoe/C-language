/*
Code : To creat a swap function and call it by value
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//19] To creat a swap function and call it by value
void swap(int x , int y);
void main(){
    int a,b;
    a=40;
    b=50;
    printf("Before execution:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(40,50);
}
void swap(int x , int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping:\n");
    printf("a = %d\n",x);
    printf("b = %d\n",y);
}