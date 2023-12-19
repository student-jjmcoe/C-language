/*
Code : Arithmetic operations on pointers 
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//27] Arithmetic operations on pointers
void main(){
    int a=40,b=20;
    int *x,*y;
    x=&a;
    y=&b;
    int add,sub,mul,div;
    add=*x+*y;
    sub=*x-*y;
    mul=*x * *y;
    div=*x / *y;
    printf("Addition is = %d\n",add);
    printf("Substraction is = %d\n",sub);
    printf("Multiplication is = %d\n",mul);
    printf("Division is = %d\n",div);
}