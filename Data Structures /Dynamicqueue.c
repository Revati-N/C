#include <stdio.h>
#include <stddef.h>
#include  <stdlib.h>

struct emp{
    int sal;
    struct emp*next;
}*record,*front,*rear,*p;

void create(){
    front=NULL;
    rear=NULL;
}
void enq(){
    record=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter salary:");
    scanf("%d/n",&record->sal);
    if(front==NULL){
        front=record;
        rear=record;
    }
    else{
        rear->next=record;
        rear=record;
    }
}
void deq(){
    if(front==NULL){
        printf("underflow");
    }
    else{
        p=front;
        front=front->next;
        free(p);
    }
}
void display(){
    record=front;
    while(record!=NULL){//not while record!=rear
        printf("\nsalary: %d",record->sal);
        record=record->next;
    }
}
void destroy(){
    // while(front!=NULL){
    //     p=front;
    //     front=front->next;
    //     free(p);}
    while(front!=NULL){
        deq();
    }
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
    printf("\nAfter deque:");
    display();
    destroy();
    printf("\nAfter destroying");
    display();
}
