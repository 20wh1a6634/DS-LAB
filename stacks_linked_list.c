#include<stdio.h>
#include<stdlib.h>
struct node{
       int data;
       struct node*link;
};
struct node*top = NULL, *cur, *temp;
void push(int ele){
     cur = (struct node*)malloc(sizeof(struct node));
     cur->data = ele;
     if(top == NULL){
             cur->link = NULL;
     }
     else{
         cur->link = top;
     }
     top = cur;
}
int pop(){
    temp = top;
    if(top == NULL){
            printf("stack underflow");
    }
    else{
        top = top->link;
        return(temp->data);
        free(temp);
    }
}
int peek(){
    return(top->data);
}
void display(){
     temp = top;
     while(temp != NULL){
                 printf("%d\n", temp->data);
                 temp = temp->link;
     }
}
int main(){
    int ch,ele;
    while(1){
         printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit");
         printf("\nEnter your choice : ");
         scanf("%d", &ch);
         switch(ch){
                case 1 : printf("Enter element : ");
                         scanf("%d", &ele);
                         push(ele);
                         break;
                case 2 : printf("Deleted element id %d",pop());
                         break;
                case 3 : if(top == NULL){
                                 printf("stack underflow");
                         }
                         else{
                             printf("top most ele is %d",peek());
                         }
                         break;
               case 4 : if(top == NULL){
                                 printf("stack underflow");
                        }
                        else{
                            display();
                        }
                        break;
               case 5 : exit(0);
        }
    }
}




