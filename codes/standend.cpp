#include<stdio.h>
int binarys(int a[], int low, int high, int val) 
{ 
    if (high >= low) { 
        int mid = (high+low)/ 2; 
        if (a[mid] == val && a[mid-1]<val) 
            return mid; 
        else if (a[mid] > val) 
            return binarys(a, low, mid - 1, val); 
        else 
		    return binarys(a, mid + 1, high, val); 
    } 
    return -1; 
} 
int binarysl(int a[], int low, int high, int val,int n) 
{ 
    if (high >= low) { 
        int mid = (high+low)/ 2; 
        if (mid==n-1||a[mid+1]>val&&a[mid]==val) 
            return mid; 
        if (a[mid] > val) 
            return binarysl(a, low, mid - 1, val,n); 
        return binarysl(a, mid + 1, high, val,n); 
    } 
    return -1; 
} 
int main(){
	int a[10];
	int i,val,n,count,d;
	i=0;
	count=0;
	int c,b,k;
	b=0;
	scanf("%d",&n);
	printf("enter sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n enter the value\n");
	scanf("%d",&val);
    c=binarys(a,0,n,val);
    d=binarysl(a,0,n,val,n);
   /* c=c+1;
    k=c;
	printf("\nstarting index=%d",c);
   /*for(i=c-1;i<n;i++){
    	if(a[i]==a[i+1]){
    		b++;
		}
	}
	int j;
	j=a[c-1];
	while(j==a[c])
	{
		count++;
		c++;
	}
//	printf("\n ending index=%d",b+c);
	printf("\n ending index=%d",count+k);
	return 0;*/
	printf("\nstart %d",c);
	printf("\nend %d",d);
}

