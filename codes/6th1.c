#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
};
struct node *create(int n)
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
			while(p->next!=NULL){
				p=p->next;
				p->next=temp;
			}
		}
	}
	p=head;
	while(p->next!=NULL){
		printf("/n%d/t",p->data);
		p=p->next;
	}
	}	

int main()
{
	struct node *HEAD;
	int n,i;
	printf("enter n");
	scanf("%d",&n);
create(n);

	return 0;
}
