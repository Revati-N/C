#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int a[20];
int top;
void create(){
    top=-1;//in create we set top as -1 and in beginning we create an array of size 20
}
void push(){
    if(top==19){
        printf("stack overflow");
    }
    else{
        top++;
        printf("Enter salary:");
        scanf("%d",&a[top]);
    }
}
void pop(){
    if(top==0){
        printf("stack underflow\n");
    }
    else{
        printf("%d is deleted\n",a[top]);
        top--;
    }
}
void destroy(){
    top=-1;
}
void display(){
    if(top==-1){
        printf("empty");
    }
    else{
        int i=0;
        while(i!=(top+1)){
            printf("salary:%d\n",a[i]);
            i++;
        }
    }
}
void main(){
    create();
    push();
    push();
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    display();
    destroy();
}