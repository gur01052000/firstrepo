#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
/*
 struct node *delmid(struct node *head,int num){
	struct node *p,*temp,*temp1;
	temp=head;
	
     while (temp->next!=NULL&&temp->data > num) { 
        
        head= temp->next; // Changed head 
        free (temp); // free old head 
        temp = head;// Change temp 
    } 
	while(temp!=NULL){
	while(temp->next!=NULL&&temp->data<=num){
		p=temp;
		temp=temp->next;
	}
	if(temp==NULL)
		return;
	 
	p->next=temp->next;
	free(temp);
	temp=p->next;
}
return (head);
}
*/

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
}/*
struct node* rotate(struct node *head,int k){
	struct node *temp,temp1;
	temp1=head;
	temp=head;
	int i;
	for(i=0;i<k;i++){
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=temp1;
	*/
	void rotate (struct node *head, int k)
{
     if (k == 0)
       return;
 
    struct node* current = head;
  
    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }
  
    if (current == NULL)
        return;
  
    struct node *kthNode = current;
  
    while (current->next != NULL)
        current = current->next;
  
    current->next = head;
  
    head = kthNode->next;
    kthNode->next = NULL;
}

	
int main()
{
    struct node *prev,*head, *p;
    int n,i,x;
    int num=8;
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
    printf("\n before\n");

/*delmid(head,num); */

rotate(head,4);
display(head);	
return 0;
}
