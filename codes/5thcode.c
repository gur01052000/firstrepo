#include <stdio.h>
#include <malloc.h>
int search(int key) ;
void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    }*head;
    typedef struct node NODE;
 
    NODE  *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
    int index;
 int key;
 
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
    printf("\nenter the key");
    scanf("%d",&key);
    index=search(key);
    printf("%d",index);
    return 0;
    
}
int search(int key)
{
	int index=0;
	struct node *cur;
	cur=head;
	while(cur!=NULL&&cur->num!=key){
		index++;
		cur=cur->ptr;
	}
	return(cur!=NULL)? index:-1;
}
