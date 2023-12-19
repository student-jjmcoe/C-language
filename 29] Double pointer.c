/*
Code : Double pointer 
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include <stdio.h>
#include<stdlib.h>

//29] Double pointer
void main(){
  int a=5;
  int *p,**q;
  p=&a;
  q=&p;
  printf("value of p is :%d\n",*p);
  printf("value of q is :%d\n",**q);  
}

