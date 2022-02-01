#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};

struct node *head = NULL, *link, *cur, *temp, *temp1;

struct node* create(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the value to be entered into the data of the node:\n ");
    for(int i = 0; i < n; i++){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &cur->data);
        if(head == NULL){
            cur->link = cur;
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != head){
                temp = temp->link;
                temp->link = cur;
                cur->link = head;
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
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    head = cur;
    return head;
}

struct node* insert_end(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    return head;
}

struct node* insert_pos(int pos, int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    int c = 1;
    while(c < pos - 1){
        temp = temp->link;
        c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
}
