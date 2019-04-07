#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head,*last;
void create(int n){
	
	int i,d;
	struct node *ins;
	if(n>=1){
		head=(struct node*)malloc(sizeof(struct node));
			printf("\n enter data");
			scanf("%d",&head->data);
			head->next=NULL;
			head->prev=NULL;
			last=head;
			for(i=2;i<=n;i++){
				ins=(struct node*)malloc(sizeof(struct node));
				scanf("%d",&ins->data);
				ins->next=NULL;
				ins->prev=last;
				last->next=ins;
				last=ins;
			}
		
	}
	
}
void displayf(){
	struct node *temp;
	if(head==NULL){
		printf("\n empty list\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL){
		printf("\n %d",temp->data);
        temp=temp->next;
		}
	}
}
void displayend(){
	struct node *p;
	if(last==NULL){
		printf("\n empty list\n");
	}
	else
	{
		p=last;
		while(p!=NULL){
		printf("\n %d",p->data);
        p=p->prev;
		}
	}
}
	

int main()
{
	int n,choice;
	head=NULL;
	last=NULL;
	printf("\n neter the no of nodes ");
	scanf("%d",&n);
    create(n);
	printf("\n enter choice:1-to display from beginning\n");
	printf("\n 2-to display from last\n");
	scanf("%d",&choice);
	if(choice==1)
	displayf();
	else
	displayend();
	return 0;
}
