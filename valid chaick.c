#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50],stack[50];
    int i,len,top=0;
    printf("Enter an Arithmetic expression:\n ");
    gets(str);
    len=strlen(str);
    for (i=0; i<len; i++)
    {
        if (str[i]=='[' || str[i]=='{' || str[i]=='(')
                {
                    top++;
                    stack[top]=str[i];
                }
                else if(str[i]==']' || str[i]=='}' ||str[i]==')')
                    top--;
    }
    if (top==0)
        printf("The expression is valid.");
    else
        printf("The expression is not valid");
    return 0;

}
