/*dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r=3,c=4,i,j;
    int *arr[r];
    for(i=0; i<r; i++)
    arr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter array elements: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",*(arr+i)+j);
        }
    }

    printf("Array contains:\n ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    free(arr[i]);
    return 0;
}