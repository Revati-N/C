#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int a[20];
int front, rear;//in queue we have front and rear
void create(){
    front=-1;
    rear=-1;//Note that u have to set it as -1, not zero. Then you are incrementing rear and placing this at the 0th pos
}
void enq(){
    int x;
    printf("Enter salary:");
    scanf("\n%d",&x);
    if(rear==19){
        printf("Q overflow");
    }
    else{
        rear+=1;
        a[rear]=x;
        if(front==-1){
            front=0;//Anoher change we have to make
        }
    }
}
void deq(){
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front+=1;
    }
}
void display(){
    int i=front;
    while(i<=rear){
        printf("\nsalary: %d",a[i]);
        i+=1;
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
    deq();
    printf("\nSalaries after deq");
    display();
}