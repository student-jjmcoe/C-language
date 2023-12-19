/*
Code : To study concept of union in c
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include<stdio.h>
// 30] To study concept of union in c
union item{
    int a;
    float f;
    char ch;
};
void main(){
    union item it;
    it.a=12;
    printf("integer = %d\n",it.a);
    it.f=20.7;
    printf("Float = %f\n",it.f);
    it.ch='z';
    printf("Character = %c\n",it.ch);
}