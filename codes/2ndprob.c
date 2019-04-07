#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

double rmd(double x){
double x1;
unsigned long int a=1103515245;
unsigned long int m=2147483648;
unsigned long int c=12345;
x1 =fmod((x*a + c),m);
return x1;
}
int main()
{ 
  time_t seconds; 

  double rf[50][1000],x,y;
  seconds = time(NULL); 
  y=seconds%1000;
double stur;
unsigned long int div=2147483648;
int n=750;
int t,e;
int o[20]={0};
double sum[1000]={0};
e=n/10;
int i,j;
for(j=0;j<6;j++){
seconds = time(NULL); 
y=seconds%1000;
printf("\n for %d course\n",j+1);
	printf("\n enter seed value");
	scanf("%lf",&x);
	x=x+y;
	for(i=0;i<n;i++)
	{
		rf[j][i]=rmd(x);
		stur=(rf[j][i]/div)*100;
		sum[j]=sum[j]+stur;
		printf("\t%lf\t",stur);
		x=rf[j][i];	
	}
	printf("\nmean is %lf",sum[j]/750);
	}
	return 0;
}


