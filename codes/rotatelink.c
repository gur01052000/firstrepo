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
      return 0;
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}
struct node *rotate(struct node *head,int k,int n)
{
	struct node *temp1,*temp,*head1;
	
	k=k%n;
	int i=1;
	temp=head;
	if(temp==NULL||k<0){
		return temp;
	}
	if(k==0){
		return temp;
	}
	while(i<n-k){
		temp=temp->next;
		i++;
	}	
	temp1=temp->next;
	head1=temp1; 
	temp->next=NULL;
	
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=head;
	
	return head1;
}
int main()
{
    struct node *prev,*head,*head1, *p;
    int n,i,x,k;
    
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    printf("\n before\n");
display(head);
printf("\n enter value of k\n");
scanf("%d",&k);
head1=rotate(head,k,n);
printf("\n after rotation\n");
display(head1);
return 0;
}
