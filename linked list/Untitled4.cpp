#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void printLinkedList()
{
struct node *ptr=head;
while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->next;
}
}void insertAtHead(struct node *head, int new_data){
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;
	
	if (head == NULL){
		new_node->next=head;
		head = new_node;
	} else{
	struct node *ptr=head;
	while(ptr!=NULL) {
	ptr=ptr->next;
}

	}
}
int main(){
	//insertAtTail(2);
	insertAtHead(head,100);
	insertAtHead(head,90);
	//insertAtTail(3);
	//insertAtMiddle(2,50);
	printLinkedList();
	return 0;

}
