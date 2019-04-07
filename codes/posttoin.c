
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define max 50
char s[max];
int top=-1;
void push(char x){
 s[++top] = x;
}
char pop()
{
      return s[top--];
}
int main(){
	char pf[100],in[100],ch,op;
	char x1,x2;
	char x3[100];
	int i=0,j=0;
	int n,count;
	printf("enter the expression\n");
	scanf("%s",pf);
	 for(count = 0; count < max; count++)
      {
            s[count] = 0;
      }
	n=strlen(pf);
	
	printf("((%c",pf[0]);
    for(i=1;i<n;i++)
	{
		ch=pf[i];
		if(isalnum(ch)){
			push(ch);
		}
		else{
			x2=pop();
		    op=ch;
		    printf(" %c %c)",op,x2);
		}
	}

return 0;
}
