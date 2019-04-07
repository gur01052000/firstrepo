
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
};
struct node* create(int n)
{int i;
	struct node *temp,*head,*p;
	head=NULL;
	temp=NULL;
	p=NULL;
		printf("\n enter data");
	for(i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
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
struct node *reverse(struct node *head){
	struct node *prev,*temp;
	if(head!=NULL){
		prev=head;
		head=head->next;
		temp=head;
		prev->next=NULL;
		while(head!=NULL){
			head=head->next;
			temp->next=prev;
			prev=temp;
			temp=head;
		}
		head=prev;
	}
	return head;
}
int main()
{
	struct node *HEAD,*head1,*head2;
	int n,a,b,i;
	printf("enter n");
	scanf("%d",&n);
HEAD=create(n);
display(HEAD);
head1=reverse(HEAD);
display(head1);
return 0;
}

