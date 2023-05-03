#include <stdio.h>
#include <stdlib.h>
struct node {
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

	void inorderTraversal(struct node* parent){
		if (parent==NULL) return;
		
			inorderTraversal(parent->left_child);
			printf("%d->",parent->data);
			inorderTraversal(parent->right_child);
	}
 	void preorderTraversal(struct node* parent){
 		if(parent==NULL) return;
 	
		printf("%d->", parent->data);
 		preorderTraversal(parent->left_child);
		preorderTraversal(parent->right_child);
	 }
	void postorderTraversal(struct node* parent) {
	if (parent == NULL) return;

		postorderTraversal(parent->left_child);
		postorderTraversal(parent->right_child);
		printf("%d ->", parent->data);
}
struct node* buildTree(int arr[], int low, int high)
{
	if(low>high) return NULL;
	if(low==high) {
	struct node* sub_root=createNode(arr[low]);
	return sub_root;

}
struct node* sub_root=createNode(arr[low]);
	int middle=(low+high)/2;
	sub_root->left_child=buildTree(arr,low+1,middle);
	sub_root->right_child=buildTree(arr,middle+1,high);
	return sub_root;
}
int main() {
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	struct node* root = buildTree(arr, 0, 9);
printf("Inorder traversal \n");
inorderTraversal(root);
printf("\nPreorder traversal \n");
preorderTraversal(root);
printf("\nPostorder traversal \n");
postorderTraversal(root);
return 0;
}

