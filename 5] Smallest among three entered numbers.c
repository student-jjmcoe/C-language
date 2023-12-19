/*
Code :
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

// 5] Smallest among three entered numberss
void main(){
    int a,b,c;
    printf("Enter Values : \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c){
        printf("Smallest number is : %d ",a);
    }
    else if(b<=a && b<=c){
        printf("Smallest number is : %d",b);
    }
    else if(c<=b && c<=a){
        printf("Smallest number is : %d",c);
    }

} 