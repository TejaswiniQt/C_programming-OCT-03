/*  Check if the string contains only digits.
WTD: Determine if all characters in the provided string are numeric digits.
(e.g.: I/P: "1234a" ,O/P: "False")
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50];
    int len,i,res;
    printf("Enter the string: ");
    fgets(arr,50,stdin);
    len = strlen(arr);
    //printf("%d\n",arr[0]-'0');
    for(i=0; i<len-1; i++)
    {
        if(((arr[i] - '0') >= 0) && ((arr[i] - '0') <= 9))
        res = 1;
        else
        {
        res = 0;
        break;
        }
    }
    if(res == 1)
    printf("True\n");
    else
    printf("False\n");
    return 0;
}