#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *before(struct node *head,int num){
	struct node *temp,*p,*ins;
	
	
      temp=head;
    while(temp!=NULL){
	if(temp->data==num)
	break;
	p=temp;
	temp=temp->next;
}
if(temp==NULL)
printf("\n not found");
else{
	ins=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data\n");
	scanf("%d",&ins->data);
	ins->next=head;
	if(temp==head)
	head=ins;
	else
	p->next=temp;
}
return head;
}
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
int main()
{
    struct node *prev,*head, *p,*head1;
    int n,i,x;
    int num=10;
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
head1=before(head,num);
printf("\n after\n");
display(head1);
return 0;
}
