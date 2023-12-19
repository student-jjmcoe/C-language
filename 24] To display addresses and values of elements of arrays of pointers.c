/*
Code : To display addresses and values of elements of arrays of pointers  
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//24] To display addresses and values of elements of arrays of pointers         
void main(){
    int *arrop[3];
    int a=10,b=20,c=30;
    arrop[0]=&a;
    arrop[1]=&b;
    arrop[2]=&c;
    for(int i=0;i<3;i++){
    printf("\naddress = %p\tvalue = %d",arrop[i],*arrop[i]);
    }
}
