//  Program to Sort Infinite Numbers in Ascending Order
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, num, count = 0;
    printf("enter -1 for exist \n");
    printf("\nEnter number : ");
    arr = (int *)malloc(sizeof(int));
    scanf("%d", &num);
    //infinite number input
    do
    {
        count++;
        arr = (int *)realloc(arr, count * sizeof(int));
        arr[count - 1] = num;
        printf("\nEnter number : ");
        scanf("%d", &num);

    } while (num != -1);
    //sorting
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //printing
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}