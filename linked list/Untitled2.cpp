//traversal


#include<stdio.h>
#include<stdlib.h>

struct node{
	int data ;

	struct node *next;
};
struct node *head;
void printLinkedList(){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct node *one = (struct node*)malloc(sizeof(struct node));
	struct node *two = (struct node*)malloc(sizeof(struct node));
	struct node *three = (struct node*)malloc(sizeof(struct node));
	
	one->data=1;
	two->data=2;
	three->data=3;
	
	one->next=two;
	two->next=three;
	three->next=NULL;
	 
	 head = one ;
	 printLinkedList();
	 return 0;
}
