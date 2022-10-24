#include<stdio.h>
int arr[5] = {1,2,3,4,5};
int temp[5];
int length = 5;
int rotation(int *array,int starting_point);
int main()
{
    rotation(arr,2);    
    return 0;
}
int rotation(int *array,int starting_point)
{
    int k = 0;
    for (int i = starting_point; i < length; i++)
    {
        temp[k] = array[i];
        k++;   
    }
    for (int i = 0; i < starting_point; i++)
    {
        temp[k] = array[i];
        k++;   
    }
    for (int i = 0; i < length; i++)
    {
        array[i] = temp[i];
        printf("%d ",array[i]);   
    }
}