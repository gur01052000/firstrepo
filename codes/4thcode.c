#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
};
void printl(struct node *n)
{
	while(n!=NULL){
		printf("%d\t",n->data);
		n=n->next;
	}
}
int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=2;
	head->next=second;
	second->data=3;
	second->next=third;
	third->data=4;
	third->next=NULL;
	printl(head);
	return 0;
}
