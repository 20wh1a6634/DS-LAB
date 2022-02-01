#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*root = NULL, *cur, *temp;
struct node*create()
{
cur = (struct node*)malloc(sizeof(struct node));
cur->left = NULL;
cur->right = NULL;
scanf("%d", &cur->data);
if(root == NULL){
root = cur;
}
else{
temp = root;
while(temp != NULL){
if(cur->data < temp->data && temp->left == NULL){
temp->left = cur;
return root;
}
else if(cur->data < temp->data && temp->left != NULL){
temp = temp-> left;
}
else if(cur->data > temp->data && temp->right == NULL){
temp->right = cur;
return root;
}
else if(cur->data > temp->data && temp->right != NULL){
temp = temp -> right;
}
}
}
}
void preorder(struct node*root){
if(root != NULL){
printf("%d\t", root->data);
preorder(root->left);
preorder(root->right);
}
}
void inorder(struct node*root){
if(root != NULL){
inorder(root->left);
printf("%d\t", root->data);
inorder(root->right);
}
}
void postorder(struct node*root){
if(root != NULL){
postorder(root->left);
postorder(root->right);
printf("%d\t", root->data);
}
}
int main() {
int ch;
while(1){
printf("\n1: Create\n2: Pre-Order Traversal\n3: In-order Traversal\n4: Post-order Traversal\n5: Exit\n");
printf("Enter your choice");
scanf("%d", &ch);
switch(ch){
case 1: create();
break;
case 2: preorder(root);
break;
case 3: inorder(root);
break;
case 4: postorder(root);
break;
case 5: exit(0);
}
}
}

 //output//
  1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
1
5
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
1
2
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
1
6
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
2
5
2
6
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
33
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
3
2
5
6
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
4
2
6
5
1.create
 2.preorder
 3.inorder
 4.postorder
 5.exit
enter your choice
5
