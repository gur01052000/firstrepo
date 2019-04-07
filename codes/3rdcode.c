#include<stdio.h>
int main()
{
	int arr[100],n,i,hash[100],k,j;
	
	printf("enter size\n");
	scanf("%d",&n);
	int max;
	max=n-1;
	printf("enter array\n");
	for(i=0;i<n;i++)	{

		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)	
		{
	hash[i]=0;
	}
	for(i=0,j=0;i<n;i++)
	{
		k=arr[i];
		if(hash[i]==0 && k!=0)
		{
			hash[k]=k;
			arr[j]=hash[k];
			printf("%d\t",arr[j]);
			
			j++;
			
		}
		else{
			arr[max]=0;
			max--;
		}
	}
	return 0;
}
