#include<stdio.h>
int arr[5] = {21,22,23,24,25};
int array_rotation(int *array,int starting_point,int lenth_array);
int main()
{
    array_rotation(arr,2,5);
    return 0;
}
int array_rotation(int *array,int starting_point,int lenth_array)
{
    int rotation = 1;
    while (rotation <= starting_point)
    {
        int last_element = array[0];
        for (int i = 0; i < lenth_array; i++)
        {
            array[i] = array[i+1];
        }
        array[lenth_array - 1] = last_element;
        rotation++;
    }
    for (int j = 0; j < lenth_array; j++)
    {
        printf("%d ",array[j]);
    }
}