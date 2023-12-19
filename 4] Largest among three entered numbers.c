/*
Code :
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 4] Largest among three entered numbers
void main(){
    int a,b,c;
    printf("Enter Value of a : ");
    scanf("%d",&a);
    printf("Enter Value of b : ");
    scanf("%d",&b);
    printf("Enter Value of c : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("largest number is %d\n",a);
        }
        else{
            printf("largest number is %d\n",c);
        }
    }
    else{
        if(b>c){
            printf("largest number is %d\n",b);
        }
        else{
            printf("largest number is %d\n",c);
        }
    }
}