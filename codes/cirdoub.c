#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
}*head,*last;
void create(int n)
{
struct node *ins;
int i=0;
    if(n>=1){
	head=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data\n");
	scanf("%d",&head->data);
	head->next=head;
	head->prev=head;
	last=head;
	for(i=2;i<=n;i++){
		ins=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&ins->data);
		ins->next=head;
		ins->prev=last;
		last->next=ins;
		head->prev=ins;
		last=ins;
	}
}
else{
printf("empty");
}
}
struct node* insertafter(int a,int b){
	struct node *ins,*temp;
	ins=(struct node*)malloc(sizeof(struct node));
	ins->data=a;
	ins->prev=ins;
	ins->next=ins;
	temp=head;
	while(temp->next!=head&&temp->data!=b){
		temp=temp->next;
	}
	if(temp->next==head&&temp->data!=b){
		printf("no node exists");
	}
	else{
	temp->next->prev=ins;
	ins->next=temp->next;
	temp->next=ins;
	ins->prev=temp;}
	return head;
}
struct  node *inserth(int k){
	struct node *ins;
	 ins=(struct node*)malloc(sizeof(struct node));
		ins->data=k;
		ins->next=head;
		ins->prev=head->prev;
		head->prev=ins;
		ins->prev->next=ins;
		head=ins;
		return head;
}
struct node *insertend(int l){
	struct node *ins;
	ins=(struct node*)malloc(sizeof(struct node));

	ins->data=l;
	ins->next=head;
	ins->prev=head->prev;
	head->prev->next=ins;
     head->prev=ins;  
	 return head;
}
void displayf(){
	struct node *temp;
	if(head==NULL)
		printf("\n empty list");
		else{
			temp=head;
			do{
			printf("\n %d",temp->data);
			temp=temp->next;
			}while(temp!=head);
		}
}
void display(struct node *head1){
	struct node *temp;
	if(head1==NULL)
		printf("\n empty list");
		else{
			temp=head1;
			do{
			printf("\n %d",temp->data);
			temp=temp->next;
		}while(temp!=head1);
	}
} 
void displaylast(){
	struct node *temp;
	if(last==NULL)
		printf("\n empty list");
		else{
			temp=last;
			do{
			printf("\n %d \n",temp->data);
			temp=temp->prev;
			}while(temp!=head);
			if(temp==head)
			printf("\n %d",temp->data);
		}
}
struct node *deleteh(){
	struct node *temp;
	temp=head;
	head=head->next;
	head->prev=temp->prev;
	temp->prev->next=head;
	free(temp);
	return head;
}
struct node *deleteend(){
	struct node *temp;
	temp=head->prev;
	head->prev=temp->prev;
	temp->prev->next=head;
	free(temp);
	return head;
}
struct node *deletes(int b){
	struct node *temp;
	temp=head;
		while(temp->next!=head&&temp->data!=b){
		temp=temp->next;
	}
	if(temp==head)
		printf("node doesnot exist");
		else{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
		}
	free(temp);
	return head;
}
int main(){
	struct node *temp1,*temp2,*temp3;
	int n;
	printf("\n enter no of nodes \n");
	scanf("%d",&n);
	create(n);
	displayf();
/*	displaylast();*/
	printf("\nafter insertion 1\n"); 
    temp1=inserth(8);
    display(temp1);
	printf("\nafter insertion 2\n"); 
	insertend(9);
	displayf();
	printf("\nafter insertion 3\n"); 
	temp3=insertafter(7,4);
	display(temp3);
	printf("\nafter deletion 1\n"); 
    deleteh();
    displayf();
    printf("\nafter deletion 2\n");
    deleteend();
    displayf();
    printf("\nafter deletion 3\n");
    deletes(7);
    displayf();
	return 0;
}
