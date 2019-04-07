#include<stdio.h>
int linear(int arr[],int n,int x);
int binary(int arr[],int a,int b,int x);
void rev(int arr[],int a,int b,int n);
void dup(int arr[],int n);


int main()
{
	int n,x,arr[100],a,b,mid,i,j,choice,result;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=0;
	b=n-1;
	printf("enter no\n");
	scanf("%d",&x);
	printf("\n 1: for linear");
	printf("\n 2: for binary");
	printf("\n 3: for reverse");
	printf("\n 4: to remove the duplicate array");
	printf("\nenter choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:result=linear(arr,n,x);
		(result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result);
		break;
		case 2: result=binary(arr,a,b,x);
		(result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result+1);
		break;
		case 3:rev(arr,a,b,n);

		break;
		case 4:dup(arr,n);
		break;
		default:
			break;
			
	}
	return 0;
}
int linear(int arr[],int n,int x)
{
	int i;
	int flag;
	for(i=0;i<n;i++)
	{if (arr[i]==x)
	return i;
	}
	return -1;
	}	

int binary(int arr[],int a,int b,int x)
{
	if(b>=a)
	{
		int mid=(a+b)/2;
		if(arr[mid]==x)
		{
	    return mid;
		}
		if(arr[mid]>x)
		return binary(arr,a,mid-1,x);
		else 
		return binary(arr,mid+1,b,x);
	}
	return -1;
}
void rev(int arr[],int a,int b,int n)
{
int temp,i;
while(a<b)
{
temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
a++;
b--;	
}
for(i=0;i<n;i++)
printf("\n reversed array is %d",arr[i]);
}
void dup(int arr[],int n){
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
				for(k=j;k<n;k++){
				
				arr[k]=arr[k+1];
				}
				n--;
		        j--;
			}
		}
	}
for(i=0;i<n;i++)
printf("\n new array is %d",arr[i]);
}

