#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
typedef struct {
	char element[max];
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
int pri(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
 
char top(stack S)
{
if(isempty(S))
printf("empty stack");
else
return (S.element[S.top]);
}
void push(stack S,char x){
	if(isfull(S))
	printf("\n overflow");
	else
	{
		++S.top;
		S.element[S.top]=x;
	}
}
char pop(stack S){
	if(isempty(S))
printf("\n underflow");	
else{
	--S.top;	
}
return S.element[S.top];
}
void print(stack S){
	int i;
	for(i=S.top;i>=0;i--){
		printf("%c",S.element[i]);
	}
}
int main(){
	stack S;
	S=init();
	char exp[100];
	char *e,x;
	printf("\n enter expression\n");
	scanf("%s",exp);

	e=exp;
	while(*e!='\0'){
		if(isalnum(*e))
		printf("%c",*e);
		else if(*e=='(')
		push(S,*e);
		else if(*e==')')
		{
			while((x=pop(S))!='(')
			printf("%c",x);
		}
		else{
			while(pri(top(S))>=pri(*e))
			printf("%c",pop(S));
			push(S,*e);
		}
		e++;
	}
	while(S.top!=-1){
		printf("%c",pop(S));
	}	
return 0;
}
