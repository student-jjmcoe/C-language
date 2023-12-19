/*
Code :performing Arithemetic operations using switch case
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 6] Arithemetic operations using switch case
void main(){
    int a,b,num;
    printf("Enter Value of a : ");
    scanf("%d",&a);
    printf("Enter Value of b : ");
    scanf("%d",&b);

    printf("select operation from below\n1-Addition\n2-subtraction\n3-multiplication\n4-division\n");
    scanf("%d",&num);

    switch(num){
        case 1:printf("Addition = %d",a+b);
               break;
        case 2:printf("Subtraction = %d",a-b);
               break;
        case 3:printf("Multiplication = %d",a*b);
               break;
        case 4:printf("Division = %d",a/b);
               break;
        default:printf("Invalid number");
    }
} 