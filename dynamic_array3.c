/*dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r=3,c=4,i,j,count=0;
    int (*ptr) [4] = malloc(sizeof(*ptr) * r);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            *(*(ptr+i)+j) = ++count;
        }
    }
    printf("Array:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}