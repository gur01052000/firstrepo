#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double rmd(double x){
double x1;
double a=1103515245;
double m=2147483648;
double c=12345;

x1 =fmod((x * a + c),m);
return x1;
}
int main()
{
int i;
double obs[1000];
double rf;
double div=2147483648;
int upper,lower;
int n=30;
double x;
	printf("\n enter upper");
	scanf("%d",&upper);
	printf("\n enter lower");
	scanf("%d",&lower);
	printf("\n enter seed value");
	scanf("%lf",&x);
	for(i=0;i<n;i++)
	{
		rf=rmd(x);
		double stur=rmd(x)/div;
		printf("%lf\t",stur);
		x=rf;	
	}
	return 0;
}
if(rf>=0&&rf<=0.1)
else if (rf>=0&&rf<0.1)
else if (rf>=0.1&&rf<0.2)
else if (rf>=0.2&&rf<0.3)
else if (rf>=0.3&&rf<0.4)
else if (rf>=0.4&&rf<0.5)
else if (rf>=0.5&&rf<0.6)
else if (rf>=0.6&&rf<0.7)
else if (rf>=0.7&&rf<0.8)
else if (rf>=0.8&&rf<0.9)
else  (rf>=9&&rf<=0.1)
else if (rf>=0&&rf<=0.1)
else if (rf>=0&&rf<=0.1)
else if (rf>=0&&rf<=0.1)
else if (rf>=0&&rf<=0.1)
else if (rf>=0&&rf<=0.1)

