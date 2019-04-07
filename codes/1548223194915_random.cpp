#include<bits/stdc++.h>
using namespace std;

long long int randm(long long int m,long long int x,long long int a,long long int c)

{

	x=(x*a+c)%m;
     return x;
	
}

int main()
{
	int n;
	cout<<"enter number of random number to be generated";
	cin>>n;
	cout<<"enter interval";
	int inte;
	cin>>inte;
  
  
 long long int m=pow(2,32),x=time(0),a=22695477,c=1;
 int j[inte]={0};
 


  for(int i=0;i<n;i++)
  {
  long long int d=randm(m,x,a,c);//cout<<d<<endl;
  	x=d;
  	
  	float o=((float)x/(float)m);
  	cout<<o<<endl;
  	int f=(int)(o*inte);
  	j[f]++;
  		
  	
}
  int b=n/inte;
 
float sum=0;
  for(int i=0;i<inte;i++)
  
  {
  	sum=sum+pow(abs(j[i]-b),2)/b;
  }
  cout<<"chi square value:"<<pow(sum,0.5);
}
