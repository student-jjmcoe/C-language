/*
Code : To cheack conditions on pointers
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//26] To cheack conditions on pointers       
void main(){
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter two number :\n");
    scanf("%d %d",&a,&b);

    if(*p<*q){
        printf("%d is less than %d",*p,*q);
    }
    else if(*p>*q){
        printf("%d is greater than %d",*p,*q);
    }
    else if(*p==*q){
        printf("%d is equal to %d",*p,*q);
    }
}
