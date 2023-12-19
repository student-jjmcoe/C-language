/*
Code : To Display 7 days using switch case 
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 7] Display 7 days using switch case 
void main(){

    int n;

    printf("Choose the number from 1 to 7: ");
    scanf("%d",&n);

    switch(n){
       case 1:printf("You Choose %d-Sunday ",n);
       break;
       case 2:printf("You Choose %d-Monday ",n);
       break;
       case 3:printf("You Choose %d-Tuseday ",n);
       break;
       case 4:printf("You Choose %d-Wednesday ",n);
       break;
       case 5:printf("You Choose %d-Thursday ",n);
       break;
       case 6:printf("You Choose %d-Friday ",n);
       break;
       case 7:printf("You Choose %d-Saturday ",n);
       break;
       default:printf("Not a Valid day");
    }
}