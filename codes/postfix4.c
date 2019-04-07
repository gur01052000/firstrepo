#include<stdio.h>
#include<string.h>
#define max 50
char s[max];
int top=-1;
void push(char x){
	top=top+1;
	s[top]=x;
}
char pop(){
	return s[top--];
}
int pri(char x){
	switch(x){
		case '#': return 0;
		case '(': return 1;
		case '+':
		case '-': return 2;
		case '*':
		case '/': return 3;	
		case '^': return 4;
	}
}
int main()
{                        
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("\n\nEnter Infix Expression : ");
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') 
		push(ch);
        else if(isalnum(ch)) 
		postfix[k++]=ch;
        else if( ch == ')')
                {
                    while( s[top] != '(')
                        postfix[k++]=pop();
                    elem=pop(); 
                }
        else
                {       
                    while( pri(s[top]) >= pri(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( s[top] != '#')    
    postfix[k++]=pop();
    postfix[k]='\0';          
    printf("\nPostfix Expression =  %s\n",postfix);
    return 0;
}
