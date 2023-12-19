/*
Code : To creat a swap function and call it by referance
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//20] To creat a swap function and call it by referance
void swap(int *x,int *y);

void main(){
    int a,b;
    a=40;
    b=140;
    printf("Before execution :\n");
    printf("a =% d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
}
void swap(int *x , int *y){
    printf("after swapping:\n");
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("a = %d\n",*x);
    printf("b = %d\n",*y);
}
    