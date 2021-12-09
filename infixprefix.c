#include <stdio.h>
#include <string.h>
char prefix[20], infix[20], stack[20], symbol, temp;
int top = -1, length, i = 0, j = 0, k = 0;

void push(char symbol)
{
    stack[++top] = symbol;
}
char pop()
{
    char symbol;
    symbol = stack[top--];
    return (symbol);
}
char ISP(char symbol)
{
    int p;
    switch (symbol)
    {
    case '^':
        p = 6;
        break;
    case '*':
    case '/':
        p = 3;
        break;
    case '+':
    case '-':
        p = 1;
        break;
    case ')':
        p = 0;
        break;
    case '#':
        p = -1;
        break;
    }
    return (p);
}
char ICP(char symbol)
{
    int q;
    switch (symbol)
    {
    case '^':
        q = 5;
        break;
    case '*':
    case '/':
        q = 4;
        break;
    case '+':
    case '-':
        q = 2;
        break;
    case ')':
        q = 0;
        break;
    case '(':
        q = 9;
        break;
    }
    return q;
}

void in_prefix(char infix[], char prefix[])
{
    push('#');
    length = strlen(infix);
    j = length;
    while (infix[i] != '\0')
    {
        if (infix[i] == '(' || infix[i] == ')')
            j--;
        i++;
    }
    while (length >= k)
        {
            symbol = infix[length];
            switch (symbol)
            {
            case ')':
                push(symbol);
                break;
            case '(':
                temp = pop();
                while (temp != ')')
                {
                    prefix[j--] = temp;
                    temp = pop();
                }
                break;
            case '^':
            case '/':
            case '*':
            case '+':
            case '-':
                while (ISP(stack[top]) >= ICP(symbol))
                {
                    temp = pop();
                    prefix[j--] = temp;
                }
                push(symbol);
                break;
            default:
                prefix[j--] = symbol;
                break;
            }
            length--;
        }
    while (top > 0)
    {
        temp = pop();
        prefix[j--] = temp;
    }
}

int main()
{
    printf("Enter Infix Expression\n");
    fgets(infix, 20, stdin);
    in_prefix(infix, prefix);
    printf("Prefix Expression is %s", prefix);
    return 0;
}