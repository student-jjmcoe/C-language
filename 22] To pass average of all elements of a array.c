/*
Code : To pass average of all elements of a array
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//22] To pass average of all elements of a array
float avg(int a[]);

void main(){
    int a[5]={10,20,30,40,50};
    float mean;
    mean=avg(a);
    printf("average is = %f",mean); 
}
float avg(int a[]){
    int sum=0;
    float avg;
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    avg=sum/5;
    return avg;
}