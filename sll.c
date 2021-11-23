#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head = NULL,*cur,*temp,*temp1;
struct node* create(){
int n;
printf("Enter the no.of nodes");
scanf("%d",&n);
while (n--) {
      cur = (struct node*)malloc(sizeof(struct node));
scanf("%d",&cur->data);
cur->link =NULL;
if(head == NULL){
head = cur;
}
else{
temp = head;
while(temp->link != NULL){
temp = temp->link;
         }
temp->link = cur;
}
 }
return head;

}



struct node* insert_begin(int ele){
cur = (struct node*)malloc(sizeof(struct node));
cur->data = ele;
cur->link = head;
    head = cur;
return head;
 }


struct node* insert_end(int ele){
cur = (struct node*)malloc(sizeof(struct node));
cur->data = ele;
cur->link = NULL;
temp = head;
while(temp->link != NULL){
temp = temp->link;
}
temp->link = cur;
return head;
}

struct node* insert_pos(int ele,int pos){
cur = (struct node*)malloc(sizeof(struct node));
int c=1;
temp = head;
    while(c < (pos-1)){
temp = temp->link;
c++;
}
    cur->link = temp->link;
    temp->link = cur;
return head;
}

struct node* delete_begin(struct node *head){
temp = head;
head = temp->link;
printf("The deleted element is %d",temp->data);
free(temp);

return head;
}

struct node* delete_end(struct node *head){
temp = head;
while(temp->link != NULL){
temp1 = temp;
temp = temp->link;
}
temp1->link = NULL;
free(temp);
return head;
}

struct node* delete_pos(struct node *head,int pos){
int c=1;
temp = head;
while(c<pos){
temp1 = temp;
temp = temp->link;
  c++;
}
  temp1->link = temp->link;
  free(temp);
return head;
}
void display(struct node *head)
{
    temp = head;
    while(temp != NULL){
          printf("%d->",temp->data);
          temp = temp->link;
    }
}
void reverse_display(struct node * head)
{
    if(head != NULL){
       reverse_display(head->link);
       printf("%d",head->data);
    }
}
int searching(struct node * head,int key)
{
     int c = 1;
     temp = head;
     while(temp != NULL){
           if(key==temp->data){
              return c;
           }
           temp = temp->link;
           c++;
     }
     return -1;
}



int main(){
       int ch,ele,pos,key;
       while(1){
           printf("1-create()\n2-Insert_begin\n3-Insert_end\n4-insert_position\n5-delete_begin\n6-delete_end\n7-delete_pos\n8-display\n9-reverse_display\n10-searching\n11-exit");
           printf("Enter your choice");
           scanf("%d",&ch);
           switch(ch){
              case 1:
                  head = create();
                  break;
              case 2:
                  scanf("%d",&ele);
                  head = insert_begin(ele);
                  break;
              case 3:
                  scanf("%d",&ele);
                  head = insert_end(ele);
                  break;
              case 4:
                  printf("Enter the element");
                  scanf("%d",&ele);
                  printf("Enter the position");
                  scanf("%d",&pos);
                  head = insert_pos(ele,pos);
                  break;
              case 5:
                  head = delete_begin(head);
                 break;
              case 6:
                  head = delete_end(head);
                  break;
              case 7:
                  printf("Enter the position");
                  head = delete_pos(head,pos);
                  break;
              case 8:
                  display (head);
                  break;
              case 9:
                  reverse_display(head);
                  break;
              case 10:
                  scanf("%d",&key);
                  pos = searching(head,key);
                  if(pos == -1)
                    printf("element not found");
                  else;
                    printf("element found at %d",pos);
              case 11:
                 exit(0);
}
}
}
output:
    
case1:
1-create(), 2-insert at begin, 3-insert at end, 4- insert at pos, 5-display
enter your choise
1
Enter the total number of nodes
5
enter the value to be inserted in the node
2
enter the value to be inserted in the node
3
enter the value to be inserted in the node
4
enter the value to be inserted in the node
5
enter the value to be inserted in the node
6

case2:
  1-create(), 2-insert at begin, 3-insert at end, 4- insert at pos, 5-display
enter your choise
2
enter the value to be inserted
1

case3:
  1-create(), 2-insert at begin, 3-insert at end, 4- insert at pos, 5-display
enter your choise
3
enter the value to be inserted
7

case4:
  1-create(), 2-insert at begin, 3-insert at end, 4- insert at pos, 5-display
enter your choise
4
enter the value and position
 9
4

case5:
  1-create(), 2-insert at begin, 3-insert at end, 4- insert at pos, 5-display
enter your choise
5
1->2->3->9->4->5->6->7
case 6:
  1 -> 2 -> 3 -> 4 -> 5
  
  enter your choise
  6
  deleted element is:1
  enter your choise
  5
  2 -> 3 -> 4 -> 5

case 7:
  enter your choise
  7
  deleted element is:5
  enter your choise
  5
  2 -> 3 -> 4
  
case 8:
     enter your choise
     8
    enter the position
    2
    deleted element 3
    enter your choise
    5
    2 -> 4
    
case 9:
     enter your choise
     9
     4 2 
     
case 10:
     enter your choise
     10
     enter the key value to be searched
     4
     element found at 2 
    
case 11:
     enter your choise
     5
     3 -> 9 -> 2 -> 5 -> 1 -> 7
     enter your choise
     11
     enter your choise
     5
     1 -> 2 -> 3 -> 5 -> 7 -> 9
 

