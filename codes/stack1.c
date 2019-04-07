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
int pri(char x)
{   if(x=='#')
    return -1;
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
int top(stack S)
{
if(isempty(S))
printf("empty stack");
else
return (S.element[S.top]);
}
stack push(stack S,char x){
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
int checkr(int n,char a[100]){
	stack=new stack;
	int i;
	   for(i=0;i<n;i++){
	   	if(a[i]!=')')
	   	S=push(S,a[i]);
	   	else{
    	char t=S.top;
    	S=pop(S);
    	int flag=1;
    	while(t!='('){
    	if (t == '+' || t == '-' ||  t == '*' || t == '/') 
                flag = 0;
				t=S.top; 
				S=pop(S);
		}
		if(flag==1)
		return 1;
		}
		return 0;
		}
}
int main(){
	stcak S;
	int n,i;
	int x;
	S=init();
    char a[100];
    scanf("%s",a);
    n=strlen(a);
  /*  for(i=0;i<n;i++){
    	S=push(S,a[i]);
	}*/
 x=checkr(n,a,S);
 if(x==12)
 printf("\nredundancy\n");
 else
 printf("no");
	return 0;
}
