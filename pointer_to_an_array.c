/*Pointer to an array */

#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int (*ptr) [5];
    ptr = &arr;
    int *p = arr;
    /*
        for(int i=0;i<4;i++)
    {
       // printf("%d ",*((*ptr)+i));
        printf("%d ",*((*ptr)+i));
      //printf("%d ",*p++);
    }
    */
   printf("%p\n",ptr);
     printf("%p\n",p);
       printf("%p\n",++ptr);
         printf("%p\n",++p);
    return 0;
}
