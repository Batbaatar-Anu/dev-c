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
 	
 	void insertLeft(struct node* parent, int data) {
		parent->left=createNode(data);
}
	void insertRight(struct node* parent, int data) {
		parent->right=createNode(data);

}
 }
 int main(){

	struct node* root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 3);
	insertLeft(root->left, 4);
	insertRight(root->left,5);
	return 0;

 }
