#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
struct emp{
    int sal;
    struct emp*next;
}*record,*top,*p;

void create(){
    top=NULL;
}
void push(){
    record=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter salary: ");
    scanf("%d",&record->sal);
    if(top==NULL){
        top=record;
    }
    else{
        record->next=top;
        top=record;
    }
}
void pop(){
    p=top;
    top=top->next;
    free(p);
}
void display(){
    p=top;
    while(p!=NULL){
        printf("salary: %d\n",p->sal);
        p=p->next;
    }
}
void destroy(){
    while(top!=NULL){
        top=top->next;
    }
}
void main(){
    create();
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    printf("After popping\n");
    display();
    destroy();
    display();
}