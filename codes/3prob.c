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
void swap(double *xp, double *yp) 
{ 
    double temp =*xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main()
{ int i,j,k,l,min;
  double stur[1000][1000];
   double rf[1000][1000],x,y;
unsigned long int div=2147483648;
int n=750;
int t,e;
double sum[50]={0};

e=n/10;
for(j=0;j<6;j++){
time_t seconds; 
seconds = time(NULL); 
y=seconds%1000;
printf("\n for %d course\n",j+1);
	printf("\n enter seed value");
	scanf("%lf",&x);
	x=x+y;
	for(i=0;i<n;i++)
	{
		rf[j][i]=rmd(x);
		stur[j][i]=(rf[j][i]/div)*100;
		sum[j]=sum[j]+stur[j][i];
		printf("\t%lf\t",stur[j][i]);
		x=rf[j][i];	
	}
	printf("\n mean is %lf",sum[j]/750);
	}
	for(j=0;j<6;j++){
    for(k=0;k<n;k++){
	min=k;
	for(l=k+1;l<n;l++){
		if(stur[j][l]<stur[j][min])
		min=l;
		swap(&stur[j][min],&stur[j][k]);	
	}
}
}
printf("\n sorted array\n");
for(j=0;j<6;j++){
		for(i=0;i<n;i++)
			printf("\t%lf\t",stur[j][i]);
		}

	return 0;
}



