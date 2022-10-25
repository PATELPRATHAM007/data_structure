// linear search algorithm

#include<stdio.h>
#define SIZEOF(array) sizeof(arr)/sizeof(int);
int arr[] = {1,2,3,3,5};
int len = SIZEOF(arr);
void search(int *array,int value );
int main()
{
    search(arr,3);
    return 0;
}
void search(int *array,int value)
{
    printf("position :- ");
    for (int i = 0; i < len; i++)
    {
        if(array[i] == value)
        {
            printf("%d ",i);
            // if given array's elements are not repited when we can write below solutions 
            /* sol :-   first convert void function into int function than write
                        "return i;" and break statment in if() statment*/
        }
        else
        {
            continue;
        }
    }    
}
