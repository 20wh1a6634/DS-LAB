#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*head = NULL,*cur,*temp;
struct node*create(){
    int n;
    printf("enter no.of nodes");
    scanf("%d" ,&n);
    while(n--){
    cur = (struct node*)malloc(size of(struct node));
    scanf("%d", (&cur--> data));
    cur-->link = NULL;
    }
    if (head == NULL)
        head = cur;
    else{
        temp = head;
        while(temp-->link!=NULL)
        temp = temp-->link;
        temp-->link=cur;
        }
   }
   return head;
struct node*insert_begin(int ele)
{
  cur = (struct node*)(malloc(struct node));
         cur-->data = ele;
         cur-->link = head;
               head = cur;
    return head;
}
struct node*insert_end(int ele)
{
  cur = (struct node*)(malloc(struct node));
         cur-->data = ele;
         cur-->link = NULL;
         temp = head;
      while(temp-->link = NULL)
           temp = temp-->link;
           temp-->link = cur;
      return head;
}
struct node*insert_pos(int pos,int ele)
    int c = 1;
{
   cur = (struct node*)(malloc(struct node));
   cur-->data = ele;
   temp = head;
   while (c < pos-1)
{
   temp = temp-->link;
   c++;
}
   cur-->link = temp-->link
   temp-->link = cur;
   return head;
}
struct node*delete_begin(struct node*head)
{
    temp = head;
    head = temp-->link
    printf("deleted elements%d", temp-->data);
      free(temp);
    return head;
}
struct node*delete_end(struct node*head)
{ 
    temp = head;
   while(temp-->link!= NULL)
   {
     temp1 = temp;
     temp = temp-->link;
   }
     temp1-->link = NULL;
     printf("delete element%d", temp-->data);
      free(temp);
     return head;
}
struct node*delete_pos(struct node*head,int pos)
{ 
        temp = head;
        int c = 1
    while(c < pos)
   {
     temp1 = temp;
     temp = temp-->link;
     c++;
   }
    temp1-->link = temp-->link
    printf("ele%d", temp-->data);
     free(temp);
     return head;
}
void display(struct node*head)
{
        temp = head;
        while(temp!=NULL)
       {
        printf("%d-->", temp-->data);
        temp = temp-->link;
void reverse display(struct node*head)
{
        if(head! = NULL)
        {
          reversedisplay(head-->link)
          printf("%d", head-->data);
        }
}
int search(struct node*head,int key)
{
     int c = 1;
     temp = head;
    while(temp!= NULL)
    {
      if(key == temp-->data)
      return c;
    }
      temp = temp-->link;
      c++
      return -1
}
struct node*sorting(struct node*head)
{  
    struct int x;
    while(temp!= NULL)
     t!= head
     while(temp!= NULL)
     {
       x = t1-->data
       t1-->data = t1-->link-->data
       t1-->link-->data = x
       t1 = t1-->link:
       }
        temp = temp-->link;
        return head
}
    

        
         






























     

