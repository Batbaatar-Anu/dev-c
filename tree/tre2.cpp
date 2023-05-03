 #include<stdio.h>
#include <stdlib.h>
 struct node{
 	int data;
 	struct node *left_child;
 	struct node *right_child;
 };
 
 struct node* createNode( int data){
 	struct node* newNode = (struct node*)malloc(sizeof(struct node));
 	newNode->data = data;
	newNode->left_child = NULL;
	newNode->right_child = NULL;

 	return newNode;
 }
 int main(){
 	 /*	struct node *root = createNode(1);
 	root->left_child = createNode(2);
 	root->right_child = createNode(3);
	root->left_child->left_child = createNode(4);
	
 	root->left_child=left;
	root->right_child=right;
	printf("%d\n", root->data);
	printf("%d\n", root->left_child->data);
	printf("%d\n", root->right_child->data);
	printf("%d\n", root->left_child->left_child->data);*/
 	struct node *root=createNode(0);
 	struct node *left= createNode(1);
 	struct node *right=createNode(2);
 	root->left_child=left;
	root->right_child=right;
	printf("%d\n", root->data);
	printf("%d\n", root->left_child->data);
	printf("%d\n", root->right_child->data);
	return 0;

 }
