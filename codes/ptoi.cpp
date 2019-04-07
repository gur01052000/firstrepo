#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 20

char stack[MAX];
int top = -1;

char pop()
{
      return stack[top--];
}

void push(char ch)
{
      stack[++top] = ch;
}
void postfix_to_infix(char expression[])
{
      int count, length;
      char element, oper;
      length = strlen(expression);
      for(count = 0; count < MAX; count++)
      {
            stack[count] = 0;
      }
      printf("\nInfix Expression:\t");
      printf("%c", expression[0]);
      for(count = 1; count < length; count++)
      {
            if(expression[count] == '-' || expression[count] == '/' || expression[count] == '*'|| expression[count] == '+')
            {
                  element = pop();
                  oper = expression[count];
                  printf("(%c%c)", oper, element);
            }
            else
            {
                  push(expression[count]);
            }
      }
}

int main()
{
      char postfix_expression[50];
      printf("\nEnter Postfix Expression:\t");
      scanf("%s", postfix_expression);
      postfix_to_infix(postfix_expression);  
    return 0;
  }
