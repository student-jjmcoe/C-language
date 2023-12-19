/*
Code : Array implementation in stack
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include<stdio.h>
#include<stdlib.h>
// 31] Array implementation in stack
int stack[25],n=50;
int top=1;
void push();
void pop();
void display();

void main(){
    int ch=0;
    while(ch!=4){
        printf("Enter choice :\n1:push\n2:pop\n3:display\n4:exit\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
        }
    }
}
void push(){
    int data;
    if(top==n){
        printf("OVERFLOW\n");
    }
    else{
        printf("Enter data : ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}
void pop(){
    int data;
    if(top==-1){
        printf("UNDERFLOW\n");
    }
    else{
        data=stack[top];
        top--;
    }
}
void display(){
    for(int i=top;i>0;i--){
        printf("%d\n",stack[i]);
    }
}