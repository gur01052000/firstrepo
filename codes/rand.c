#include<stdio.h>
#include<math.h>
#include<stdlib.h>
unsigned long int x1;
int rmd(int x){
	unsigned long int a=	1103515245;
unsigned long	int m=2147483648;
unsigned long	int c=12345;
	x1=(x*a+c)%m;
	return x1;
}

int main()

{
	int i,upper,lower;
	int n=100;
	upper=120;
	lower=1;
	unsigned long int x;
	scanf("%d",&x);
	for(i=0;i<n;i++){
		
	int num=(rmd(x)%(upper-lower+1))+lower;
	printf("%d\t",num);
	x=rmd(x);
	
	}
	return 0;
}
