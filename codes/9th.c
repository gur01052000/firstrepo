#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}; 
int total(struct node *head,int num){
	struct node *temp,*p;
	int count=0;
	temp=head;
	
	while(temp!=NULL){
		if(temp->data==num)
		count++;
		temp=temp->next;
	}
	return count;
	
}
void display(struct node *head){
	
	struct node *p;
	p=head;
	while(p!=NULL){
		printf("\n%d",p->data);
		p=p->next;
	}
}
struct node * create(int n){
	
		struct node *p,*temp,*head;
		p=NULL;
		temp=NULL;
		head=NULL;
		int i;
		for(i=0;i<n;i++){
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL)
		head=p;
		else{
		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=p;
		}
	}
		return head;
}
int main(){
	struct node *head1;
	int i,n,count,num;
	num=30;
	printf("\n enter no of nodes");
	scanf("%d",&n);
    head1=create(n);
	display(head1);  
	count=total(head1,num);
	printf("\n count is %d",count);
		return 0;
	}
	
	

