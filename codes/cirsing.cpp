#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *create(int n){
	int i;
		struct node *p,*temp,*prev;
	if(n>=1){
	p=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data\n");
	scanf("%d",&p->data);
	p->next=NULL;
	prev=p;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		prev->next=temp;
		prev=temp;
	}
	prev->next=p;
}
return p;
}
struct node *insertb(struct node *head,int k){
	struct node *temp,*temp1;
	
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=k;
	temp1->next=head;
	temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=temp1;
	head=temp1;
	return head;
}
struct node *deleteh(struct node *head){
	struct node *temp,*temp1;
	temp=head;
	temp1=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	head=head->next;
	temp->next=head;
	free(temp1);
	return head;
}
struct node *deleteend(struct node *head){
	struct node *temp,*temp1;
	temp=head;
	while(temp->next!=head){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=head;
	free(temp);
	return head;
}
struct node *deletes(struct node *head,int k){
	struct node *temp,*temp1;
	temp=head;
	while(temp->next!=head&&temp->data!=k){
		temp1=temp;
		temp=temp->next;
	}
	if(temp==head)
	head=NULL;
	else{
		temp1->next=temp->next;
		free(temp);
	}
	return head;
}
struct node *insertlast(struct node *head,int k){
	struct node *temp,*temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=k;
	temp1->next=NULL;
	temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
		temp->next=temp1;
		temp1->next=head;
		return head;
}
struct node *inserts(struct node *head,int k){
	struct node *temp,*temp1;
	temp=head;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data\n");
	scanf("%d",&temp1->data);
	temp1->next=NULL;
	if(temp->data==k){
		temp->next=temp1;
		temp1->next=temp;
	}
	else{
	temp=temp->next;
	while(temp->next!=head&&temp->data!=k)	{
		temp=temp->next;
	}	
	temp1->next=temp->next;
		temp->next=temp1;
	
	}
	return head;
}
void display(struct node *temp1){
	struct node *temp;
	if(temp1==NULL){
		printf("\n empty list");
	}
	else{
	temp=temp1;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=temp1);
	}
}
int main(){
	struct node *temp1,*temp2,*temp3,*temp4,*temp5,*temp6,*temp7;
	int n,k;
	k=5;
	printf("\n enter the no of nodes\n");
	scanf("%d",&n);
    temp1=create(n);
    display(temp1);
    temp2=inserts(temp1,k);
    printf("after\n");
    display(temp2);
    temp3=insertb(temp2,7);
    printf("after\n");
    display(temp3);
    printf("after\n");
    temp4=insertlast(temp3,9);
    temp5=deleteh(temp4);
    printf("\n delete at end\n");
    display(temp5);
    temp6=deleteend(temp5);
    temp7=deletes(temp6,8);
    display(temp7);
    return 0;
}
