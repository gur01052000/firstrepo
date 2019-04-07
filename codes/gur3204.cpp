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
  double y;
  seconds = time(NULL); 
  y=seconds%1000;
printf("%lf",y);
int i;
double rf;
unsigned long int div=2147483648;
int n=10000;
int t,e;
int o[20]={0};
float sum=0;
e=n/10;
double x;

	printf("\n enter seed value");
	scanf("%lf",&x);
	x=x+y;

	for(i=0;i<n;i++)
	{
		rf=rmd(x);
		double stur=rf/div;
		printf("%lf\t",stur);
		t=int(stur*10);
		o[t]++;
		x=rf;	
	}
    for(t=0;t<=9;t++){
    	sum=sum+((o[t]-e)*(o[t]-e))/(float)(e);
	}
	printf("\n chi square value is %f",sum);
	return 0;
}


