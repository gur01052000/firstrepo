
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head,*last;
void create(int n){
	int i=0;
	struct node *ins;
	if(n>=1){
		head=(struct node*)malloc(sizeof(struct node));
		printf("\n enter the data\n");
		scanf("%d",&head->data);
		head->prev=NULL;
		head->next=NULL;
		last=head;
		for(i=2;i<=n;i++)
		{
			ins=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&ins->data);
			ins->next=NULL;
			ins->prev=last;
			last->next=ins;
			last=ins;
		}
	}
	else
	printf("\n empty list");
}
struct node * insertafter(int x,int num){
	struct node *p,*temp;
	if(head==NULL)
	printf("\n empty");
	else{
	p=(struct node*)malloc(sizeof(struct node));
	p->data=num;
	p->next=NULL;
	p->prev=NULL;
	temp=head;
	while(temp!=NULL&&temp->data!=x)
	temp=temp->next;
	if(temp==NULL){
		printf("\n node doesnot exist\n");
	}else{
    p->next=temp->next;
    temp->next=p;
    p->prev=temp;
}
}	
return head;
}
void display(struct node *head1){
	struct node *temp;
	if(head1==NULL)
		printf("\n empty list");
		else{
			temp=head1;
			while(temp!=NULL){
			printf("\n %d",temp->data);
			temp=temp->next;
		}
	}
} 
void displayf(){
	struct node *temp;
	if(head==NULL)
		printf("\n empty list");
		else{
			temp=head;
			while(temp!=NULL){
			printf("\n %d",temp->data);
			temp=temp->next;
		}
	}
}                                                                                                                                                                                                                                                                                         
void displayend(){
	struct node *temp;
	if(last==NULL)
		printf("\n empty list");
		else{
			temp=last;
			while(temp!=NULL){
			printf("\n %d",temp->data);
			temp=temp->prev;
		}
	}
}
struct node *insertlast(int y){
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=y;
	p->next=NULL;
	p->prev=NULL;
	if(head==NULL)
	head=p;
	else{
	temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
    p->next=NULL;
    temp->next=p;
    p->prev=temp;
}
return head;
}
struct node *insertb(int a){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=a;
	p->next=NULL;
	p->prev=NULL;
	if(head==NULL)
	head=p;
	else{
	p->next=head;
    head->prev=p;
    head = p;
}
return head;
}
struct node *deleteb(struct node * head){
	struct node *temp;
	temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
	return head;
}
struct node *deleteend(struct node * head){
	struct node *temp,*p;
	temp=head;
	while(temp->next!=NULL){
		p=temp;
		temp=temp->next;
	}
	p->next=NULL;
	temp->prev=NULL;
	free(temp);
	return head;
}
struct node *deletes(struct node * head,int c){
	struct node *temp,*p;
	temp=head;
	while(temp!=NULL&&temp->data!=c){
	p=temp;
	temp=temp->next;}
	if(temp==NULL){
		printf("\n node not found");
	}
	else{
		temp->next->prev=p;
		p->next=temp->next;
		free(temp);
	}
	return head;
	}
int main(){
	struct node *head1,*head2,*head3,*head4,*head5,*head6;
	int n,choice;
	int x,num,c;
	c=2;
	x=25;
	num=28;
	int a =14;
	printf("\n enter no of nodes");
	scanf("%d",&n);
	printf("\n 1: to display in forward direction");
	printf("\n 2: to display in backward direction");
	printf("\n Enter choice\n");
	scanf("%d",&choice);
	create(n);
	if(choice==1)
	displayf();
	else
	displayend();
	printf("\n after insertion\n");
    int y=40;
    head1=insertafter(x,num);
    head2=insertlast(y);
    head3= insertb(a);
	display(head3);
    head4=deleteb(head3);
    head5=deleteend(head4);
    head6=deletes(head5,c);
    display(head6);
	return 0;
}

