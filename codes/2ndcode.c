#include<stdio.h>
int main()
{
	int i,j,k,m,n,p,q,sum;
	int a[100][100],b[100][100];
	 m=3;
	 n=4;
	 p=4;
	 q=3;
	  sum=0;
	 int mul[100][100];
	printf("\n enter the 1st matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
				
		printf("\n enter the element a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
    printf("\n enter the 2nd matrix");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++){		
		printf("\n enter the element b[%d][%d]: ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
if(n==p){
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			for(k=0;k<p;k++){
				sum=sum+a[i][k]*b[k][j];
			}
			mul[i][j]=sum;
			sum=0;
		}
	}

for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",mul[i][j]);	
		}
			printf("\n");
	}
}
	return 0;
}
