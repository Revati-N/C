#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
struct emp{
    int sal;
    struct emp* next;
}*first,*old,*record;

void create(){
    first=NULL;
    old=NULL;
}
void insert(){
    record=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter emp salary");
    scanf("%d",&record->sal);
    if(first==NULL){
        record->next=NULL;
        first=record;
        old=record;
    }else{
        old->next=record;
        old=record;
        old->next=NULL;
    }
}
void display(){
    record=first;
    while(record!=NULL){
        printf("%d\n",record->sal);
        record=record->next;
    }
}
void delete(int x){
    struct emp*p,*q;
    p=first;
    if(first->sal==x){
        first=first->next;
        free(p);
    }
    else if(old->sal==x){
        while((p->next)->next!=NULL){
            p=p->next;
        }
        p->next=NULL;
        free(old);
        old=p;
    }
    else{
        while(p->next!=NULL &&p->next->sal!=x){
            p=p->next;
        }
        if(p->next==NULL){
            printf("Not found");
        }else{
            q=p->next;//here we're freeing p->next, not "p"
            p->next=p->next->next;
            free(q);
        }
    }
}
void main(){
    create();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    delete(5);
    display();
}

struct node *ptr = (struct node*)malloc(sizeof(struct node))
