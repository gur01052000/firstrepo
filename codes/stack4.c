#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct {
	int element[max];
	int top;
} stack;
stack init()
{
	stack S;
	S.top=-1;
	return S;
}
int isempty(stack S){
	return(S.top==-1);
}
int isfull(stack S){
	return(S.top==max-1);
}
int top(stack S){
if(isempty(S))
printf("empty stack");
else
return (S.element[S.top]);
}
stack push(stack S,int x){
	if(isfull(S))
	printf("\n overflow");
	else
	{
		++S.top;
		S.element[S.top]=x;
	}
	return S;
}
stack pop(stack S){
	if(isempty(S))
printf("\n underflow");	
else{
	--S.top;	
}
return S;
}
void print(stack S){
	int i;
	for(i=S.top;i>=0;i--){
		printf("%c",S.element[i]);
	}
}
int main(){
	stack S;
	int n,i;
	char s[20];
	S=init();
    printf("\n enter the string");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    S=push(S,s[i]);
  	print(S);
	return 0;
}
