/*dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r=3,c=4,i,j;
    int *ptr = malloc(r*c*sizeof(int));
    printf("enter the array elements: ");
    for(i=0;i<r*c;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("array contains:\n");
    for(i=0;i<r*c;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}