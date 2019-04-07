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
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("\n\nEnter Infix Expression : ");
    scanf("%s",infix);
    push(S,'#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') 
		push(S,ch);
        else if(isalnum(ch)) 
		postfix[k++]=ch;
        else if( ch == ')')
                {
                    while( top(S) != '(')
                        postfix[k++]=pop(S);
                    elem=pop(S); /* Remove ( */
                }
         else
                {       /* Operator */
                    while( pri(top(S)) >= pri(ch) )
                        postfix[k++]=pop(S);
                    push(S,ch);
                }
    }
    while( top(S) != '#')     /* Pop from stack till empty */
        postfix[k++]=pop(S);
    postfix[k]='\0';          /* Make postfix as valid string */
    printf("\nPostfix Expression =  %s\n",postfix);

return 0;
}
