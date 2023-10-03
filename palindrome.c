#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,len,res;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(i=0; i<len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
             res = 0;
             break;
        }
        else
        res = 1;
    }
    if(res == 1)
    printf("Yes its a palindrome\n");
    else
    printf("No its not a palindrome\n");
    return 0;

}