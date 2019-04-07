#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

display(struct node *head)
{
    if(head == NULL)
    {
      return;
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

struct node *del (struct node *head)
{
 struct node *temp;
 temp=head;
 head=head->next;
 free(temp); 
 return head;
}
struct node *delend (struct node *head){
	struct node *temp,*second;
	if(head==NULL)
	{
		return NULL;
	}
	else if(head->next==NULL){
		free(head);
		return NULL;	
	}
	else{
		second=head;
		while(second->next->next!=NULL)
		second=second->next;
		temp=second->next;
		second->next=NULL;
	}
	return head;
}/*
struct node * delmid(struct node *head,int num){
	struct node *p,*temp;
	temp=head;
	if(head==NULL)
	{
	free(temp);
	}else
	{
	while(temp->next!=NULL&&temp->data!=num){
		p=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		printf("\n NOT FOUND");
	}
	else if(temp->next==NULL){
		p->next=NULL;
	}
	else
	p->next=temp->next;
	free(temp);
}
return head;
}*/
int main()
{
    struct node *prev,*head,*head2, *p;
    int n,i,x;
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    /*node to be deleted is head->next->next*/
   
    head=del(head);
    head2=delend(head);
    display(head2);
    return 0;
}
