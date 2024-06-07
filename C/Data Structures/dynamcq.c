#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

struct emp{
    int sal;
    struct emp*next;
}*record,*front,*rear,*p;

void create(){
    front=NULL;
    rear=NULL;
}
bool isEmpty(){
    if(front==NULL){
        return(true);
    }
    return(false);
}
bool isFull(){
    if(front==rear &&front!=NULL){
        return(true);
    }
    return(false);
}
void enq(){
    record=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter salary:");
    scanf("%d",&record->sal);
    if(isEmpty()){
        front=record;rear=record;
        front->next=front;
    }
    else{
        rear->next=record;
        rear=record;
        record->next=front;
    }
}
void deq(){
    if(isEmpty()){
        printf("underflow");
    }
    else{
        if(front==rear&&front!=NULL){
            p=front;
            front=NULL;
            rear=NULL;
            free(p);
        }
        else{
            p=front;
            front=front->next;
            rear->next=front;
        }
    }
}
void destroy(){
    while(!isEmpty()){
        deq();
    }
}
void display(){
    //if front==NULL then break;
    record=front;
    while(record!=rear){
        printf("salary %d\n",record->sal);
        record=record->next;
    }
    printf("salary %d\n",record->sal);
}
void main(){
    create();
    enq();
    enq();
    enq();
    enq();
    enq();
    display();
    printf("\nAfter deq\n");
    deq();
    display();
    destroy();
    
    // display(); If I run this, I get segmentation fault as after destroting I called display wherein I access the front pointer that has been set to null=>check for null in display
}