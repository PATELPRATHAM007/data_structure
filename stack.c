#include<stdio.h>
#include<stdlib.h>
int top = -1;
int array[5];
int push(int element);
int change(int position,int update);
int peep(int value);
int pop();
void display();
int main()
{
    while (0 == 0)
    {
        int no;
        printf("enter no of below function\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peep\n");
        printf("4.change\n");
        printf("5.display\n");
        printf("6.exit\n");
        scanf("%d",&no);
        switch(no)
        {
        int element;
        int value;
        int position;
        int update;
        case 1:
            printf("enter the value of no.%d element \n",top+1);
            scanf("%d",&element);
            push(element);
            break;
        
        case 2:
            pop();
            break;

        case 3:
            printf("enter the value you want to search\n");
            scanf("%d",&value);
            peep(value);
            break;

        case 4:
            printf("enter position and value you want to change\n");
            scanf("%d %d",&position,&update);
            change(position,update);
            break;
        
        case 5:
            display();
            break;
        }
    }

    
    return 0;
}
int push(int element)
{
    if(top == 4)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        array[top] = element;

    }
    return element;
}
int pop()
{
    if(top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        int delement = array[top];
        array[top] = 0;
        top--;
        return delement;
    }
}
int change(int position,int update)
{
    if(position < top)
    {   array[position] = update;
        return update;
    }
    else
    {
        printf("element is not available is this position %d so you don't change value\n",position);
    }
}
int peep(int value)
{
    printf("posessions:- ");
    for (int k = 0; k < top; k++)
    {
        if(array[k] == value)
        {
            printf("%d ",k);
            return k;
            break;
        }
    }
    printf("\n");
}
void display()
{
    printf("stack elements\n");
    for(int i = 0;i < top;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}