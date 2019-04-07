#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
}*top;
void init()
{
	top=NULL;
}
void push(int value){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	if(top==NULL){
		temp->next=NULL;
	}
	else
	temp->next=top;
	top=temp;	
}
void pop(){
	struct node *temp;
	if(top==NULL)
	printf("Underflow");
	else
	{
		temp=top;
		top=top->next;
		free(temp);
	}
}
void print()
{
	struct node *temp;
	if(top==NULL)
	printf("empty stack");
	else 
	{
		temp=top;
		while(temp!=NULL){
			printf("%d",temp->data);
			temp=temp->next;
		}

	}
}
int main(){
	struct node *stack;
	int num;
	init();
    printf("\n enter the no.");
    scanf("%d",&num);
    while(num!=0){
    	push(num%2);
    	num=num/2;
	}
	print();
    
	return 0;
}
