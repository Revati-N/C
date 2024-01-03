#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
int a[5];
int front, rear;
void create(){
    front=-1;
    rear=-1;
}

bool isEmpty(){
    if(front==-1){
        return(true);
    }
    return(false);
}
bool isFull(){
    if((rear+1)%5==front){
        return(true);
    }
    return(false);
}
void enq(){
    int x;
    printf("Enter value:");
    scanf("%d",&x);
    if(isEmpty()){
        front=0;
        rear=0;
        a[rear]=x;
    }
    else{
        if(isFull()){
            printf("Overflow");
        }
        else{
            rear=(rear+1)%5;
            a[rear]=x;
        }
    }
}
void deq(){
    if(isEmpty()){
        printf("underflow");
    }
    else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%5;
        }
    }
}
void display(){
    int i=front;
    // for(i=front;i<rear;){
    //     printf("%d",a[i]);
    //     i=(i+1)%5;
    // }
    // printf("%d",a[i]);//hv to add this in the end or it becomes infinite loop
    //for loop doesn't work
    while(i!=rear){
        printf("%d",a[i]);
        i=(i+1)%5;
    }
    printf("%d",a[i]);
}
void main(){
    create();
    enq();
    enq();
    enq();
    enq();
    enq();
    display();
    deq();
    deq();
    enq();
    printf("\nAfter deq\n");
    display();
    printf("\n%d",front);
    printf("\n%d",rear);
}