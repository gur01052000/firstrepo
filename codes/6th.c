#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
};
struct node* insertb(int b,struct node *head);	
struct node* insert(struct node *head,int a,int b);
void display(struct node *head);
struct node* create(int n);
int main()
{
	struct node *HEAD,*head1,*head2;
	int n,a,b,i;
	printf("enter n");
	scanf("%d",&n);
HEAD=create(n);
printf("\n enter value to be inserted");
scanf("%d",&b);
printf("\n after which node");
scanf("%d",&a);
head1=insert(HEAD,a,b);
head2=insertb(b,HEAD);
display(head1);
display(head2);
	return 0;
}
struct node* create(int n)
{int i;
	struct node *temp,*head,*p;
	head=NULL;
	temp=NULL;
	p=NULL;
	for(i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\n enter data");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			p=head;
			while(p->next!=NULL)
				p=p->next;
				p->next=temp;
			
		}
	}
	return head;
	}
	void display(struct node *head)
{ 
	struct node *p=NULL;
	if(head==NULL){
		printf("empty linklist");
	}
	else{
		p=head;
	while(p!=NULL){
		printf("\n %d\t",p->data);
		p=p->next;
	}
}
}
struct node* insert(struct node *head,int a,int b)
{
	struct node *p,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=b;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		p=head;
		while(p!=NULL&&p->data!=a)
			p=p->next;
			if(p==NULL){
				printf("not present");
			}
			else{
			temp->next=p->next;
			p->next=temp;}
	}
	return head;	
}
struct node* insertb(int b,struct node *head)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=b;
	temp->next=head;
	head=temp;
	return head;
}
