#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node*link;
};
struct node *head = NULL,*cur, *temp,*temp1;

struct node*create(){
    int n;
    printf("Enter the number of nodes to be inserted\n");
    scanf("%d",&n);
    while(n--){
        cur = (struct node*)malloc(sizeof(struct node));
        printf("Enter the node data");
        scanf("%d",&cur -> data);
        if(head == NULL){
            cur -> link = cur;
            head = cur;
        }
        else{
            temp = head;
            while (temp -> link != head)
            {
                temp = temp ->link;
            }
            temp -> link = cur;
            cur -> link = head; 
        }  
    }
    return head;
}

struct node* insert_begin(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    temp = head;
    while (temp -> link != head){
        temp = temp ->link;
    }
    temp -> link = cur;
    cur -> link = head; 
    head = cur;
    return head;
}

struct node* insert_end(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    temp = head;
    while (temp -> link != head){
    temp = temp ->link;
    }
    temp -> link = cur;
    cur -> link = head; 
    return head;
}
struct node *insert_pos(int ele, int pos){
    int c=1;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data=ele;
    temp = head;
    while(c<pos-1){
       temp = temp->link;
       c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
}
struct node * delete_begin(struct node*head){
    temp = head;
    while (temp -> link != head)
    {
        temp = temp -> link;
    }
    temp1 = head;
    temp -> link = temp1 -> link;
    head = temp1 -> link;
    printf("deleted element is %d",temp1 -> data);
    free(temp1);
    return head;
}

struct node *delete_pos(struct node *head,int pos){
     temp = head;
     int c=1;
     while(c<pos){
        temp1 = temp;
        temp = temp->link;
        c++;
     }
     temp1->link = temp->link;
     printf("deleted element %d\n",temp->data);
     free(temp);
     return head;
}
struct node * delete_end(struct node*head){
    temp = head;
    while (temp -> link != head)
    {
        temp1 = temp;
        temp = temp -> link;
    }
    temp1 -> link = temp -> link;
    printf("deleted element is %d",temp -> data);
    free(temp);
    return head;
}
void display(struct node *head){
     temp = head;
     while(temp ->link != head){
         printf("%d -> ",(temp->data));
         temp = temp->link;
     }
     printf("%d -> ",(temp->data));
} 

int main(){
    struct node * head;    
    int ele,ch,pos,key;
    while(1){
       printf("\n1-create()\n 2-insert at begin\n 3-insert at end\n 4- insert at pos\n 5-display \n 6-delete at begin\n 7-delete at end\n 8-delete at pos\n 9-exit \n");
       printf("enter your choise\n");
       scanf("%d",&ch);
       switch(ch){
            case 1: head = create();
                    break;
            case 2: printf("enter the value to be inserted\n");
                    scanf("%d",&ele);
                    head = insert_begin(ele);
                    break;
            case 3: printf("enter the value to be inserted\n");
                    scanf("%d",&ele);
                    head = insert_end(ele);
                    break;
            case 4: printf("enter the value and position\n ");
                    scanf("%d %d",&ele,&pos);
                    head = insert_pos(ele,pos);
                    break;
            case 5: display(head);
                    break;
            case 6: head = delete_begin(head);
                    break;
            case 7: head = delete_end(head);
                    break;
            case 8: printf("enter the position\n");
                    scanf("%d",&pos);
                    head = delete_pos(head,pos);
                    break;        
            case 9: exit(0);
            
       }
   }             
}

output:
1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display 
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit 
enter your choise
1
Enter the number of nodes to be inserted
4
Enter the node data2
Enter the node data3
Enter the node data4
Enter the node data5

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
2
enter the value to be inserted
1

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
3
enter the value to be inserted
6

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
4
enter the value and position
 7 
3

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
5
1 -> 2 -> 7 -> 3 -> 4 -> 5 -> 6 -> 

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
6
deleted element is 1

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
7
deleted element is 6

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
8
enter the position
2
deleted element 7

1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-exit
enter your choise
5
2 -> 3 -> 4 -> 5 ->
