#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct emp{
    int sal;
    struct emp*next;
    struct emp*prev;
}*record,*first,*last;
struct emp*p;

void create(){
    first=NULL;
    last=NULL;
}
void insert(){
    record=(struct emp*)malloc(sizeof(struct emp));
    printf("Enter emp salary:");
    scanf("%d",&record->sal);
    if(first==NULL){
        first=record;
        last=record;
        record->prev=NULL;
        record->next=NULL;
    }
    else{
        last->next=record;
        record->prev=last;
        last=record;
        last->next=NULL;
    }
}
void displayFromEnd(){
    record=last;
    while(record!=NULL){
        printf("Salary: %d\n",record->sal);
        record=record->prev;
    }
}
void delete(int x){
    if(first->sal==x){
        first->next->prev=NULL;
        p=first;
        first=first->next;
        free(p);
    }
    else if(last->sal==x){
        last->prev->next=NULL;
        p=last;
        last=last->prev;
        free(p);
    }
    else{
        p=first;
        while(p->sal!=x && p->next!=NULL){
            p=p->next;
        }
        if(p->sal!=x){
            printf("Not found");
        }
        else{
            (p->prev)->next=p->next;
            (p->next)->prev=p->prev;
            free(p);
        }
    }
}
void add(int x){
    char ch;
    record=(struct emp*)malloc(sizeof(struct emp));
    record->sal=x;
    printf("Enter place of insertion B/E/I(in between)");
    scanf(" %c",&ch);
    printf("%c",ch);
    if(ch=='B'||ch=='b'){
        record->next=first;
        first->prev=record;
        first=record;
        first->prev=NULL;
    }
    else if(ch=='E'||ch=='e'){
        last->next=record;
        record->prev=last;
        last=record;
        last->next=NULL;
    }
    else{
        int pos,i=1;
        p=first;
        printf("Enter position where to add: example, if u enter 3, the new element will come at the third position starting from 1");
        scanf(" %d",&pos);
        printf("%d",pos);
        while(i!=pos){
            i++;
            p=p->next;
        }
        (p->prev)->next=record;
        record->prev=p->prev;//Here don't forget to connect the PREV pointers along with the next pointers
        record->next=p;
        p->prev=record;
    }
    
}
void main(){
    create();
    insert();
    insert();
    insert();
    insert();
    insert();
    printf("Displayed from the end\n");
    displayFromEnd();
    delete(33);
    printf("This is the deleted version:\n");
    displayFromEnd();
    add(7);
    printf("This is the inserted version:\n");
    displayFromEnd()
}