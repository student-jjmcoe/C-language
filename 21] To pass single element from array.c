/*
Code : To pass single element from array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//21] To pass single element from array
void display(int age1, int age2){
    printf("The age is: %d\n",age1);
    printf("The age is: %d\n",age2);
}
void main(){
    int age[5]={11,12,13,14,15};
    display(age[1], age[2]);
}
    