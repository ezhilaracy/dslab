#include<stdio.h>
#include<stdlib.h>
struct BST{
int data;
struct BST*lchild;
struct BST*rchild;
};
typedef struct BST*NODE;
NODE temp;
temp=(NODE)malloc(sizeof(struct BST));
printf("\n enter the value:");
scanf("%d",&temp->data);
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}
void insert(NODE root,NODE newnode){
if(newNode->data<root->data){
if(roor->lchild==NULL){
root->lchild=newnode;

}else{
insert(root->lchild,newnode);
}else if(newnode->data>root->data){
if(root->rchild==NULL){
root->rchild=newnode;
}else{
inserrt(root->rchild,newnode);
}
}
}
void search(NODE root){
int key;
NODE cur;
if(root==NULL){
printf("\n BST is empty.");
return;
}
printf("\n enter element to be searched:");
scanf("%d",&key);
cur=root;
while(cur!=NULL){
if(cur->data==key){
printf("\n key element is present in BST");
return;
}
if(key<cur->data){
cur
