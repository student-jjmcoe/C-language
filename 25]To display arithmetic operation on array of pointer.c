/*
Code : To display arithmetic operation on array of pointer
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//25] To display arithmetic operation on array of pointer        
void main(){
    int a,b;
    a=20;
    b=30;
    int *p,*q;
    p=&a;
    q=&b;

    *p+=*q;
    printf("addition = %d\n",*p);
    *p-=*q;
    printf("Substraction = %d\n",*p);
    *p*=*q;
    printf("Multiplication = %d\n",*p);
    *p/=*q;
    printf("Division = %d\n",*p);
    *p%=*q;
    printf("modulas is = %d\n",*p);
}
