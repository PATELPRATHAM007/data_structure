#include<stdio.h>
#include<stdlib.h>
int array[5];
int array_a[5];
int len = 5;
int find_top(int *stack);
int push(int *stack,int element);
int pop(int *stack);
int peep(int *stack,int value);
int change(int *stack,int position,int update);
int display(int *stack);
int main()
{
    push(array,21);
    push(array,22);
    push(array,23);
    push(array_a,31);
    push(array_a,32);
    push(array_a,33);
    push(array_a,34);
    pop(array_a);
    peep(array,23);
    display(array);
    display(array_a);
    
    return 0;
}
int find_top(int *stack)
{
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if(stack[i] != 0)
        {
            counter++;
        }
        else
        {
            continue;
        }
    }
    return counter - 1;
}
int push(int *stack,int element)
{
    int index = find_top(stack);
    if(index == 4)
    {
        printf("stack is overflow\n");
    }
    else
    {
        index++;
        stack[index] = element;
    }
    return stack[index];
}
int pop(int *stack)
{
    int index = find_top(stack);
    int del =  stack[index];
    if(index == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        stack[index] = 0;
        index--;
    }
    return del;
}
int peep(int *stack,int value)
{
    printf("position :- ");
    for (int  i = 0; i <= find_top(stack); i++)
    {
        if(stack[i] == value)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
int change(int *stack,int position,int update)
{
    int index = find_top(stack);
    if(position <= index)
    {
        stack[position] = update;
        return update; 
    }
    else
    {
        printf("element is not available is this position %d so you don't change value\n",position);
    }
}
int display(int *stack)
{
    int index = find_top(stack);
    printf("stack elements\n");
    for (int i = 0; i <= index; i++) 
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}