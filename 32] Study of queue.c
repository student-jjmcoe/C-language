/*
Code : Study of queue
Name : Shweta Suresh Chindage
Roll no. : 7
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int rear=-1;
int front=-1;
void insert();
void delete();
void display();

void main(){
    int choice;
    while(1){
        printf("Enter choice:\n");
        printf("1.Insert element in queue\n");
        printf("2.delet element from queue\n");
        printf("3.display all elements of queue\n");
        printf("4.Quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
            default : printf("Wrong choice\n");
        }
    }
}
void insert(){
     int add_item;
     if(rear==MAX-1){
        printf("OVERFLOW\n");
     }
     else if(front==-1){
        front=rear=0;
        printf("enter data to insert: ");
        scanf("%d",&add_item);
        queue[rear]=add_item;
     }
     else{
        
        printf("enter data to insert: ");
        scanf("%d",&add_item);
        rear++;
        queue[rear]=add_item;
     }
}
void delete(){
     if(front==-1){
        printf("UNDERFLOW\n");
     }
     else{
        printf("data to be deleted : %d\n",queue[front]);
        front++;
        
     }
}
void display(){
    if(front==-1){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
    }
}
