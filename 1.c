#include <stdio.h>
#include<string.h>
int main() {

    char str[50];
    int len,i;
    
    printf("enter a string: ");
    scanf("%s",&str);
    
    len=strlen(str);
    for(i=0;i<len/2;i++)
        {
            if(str[i]!=str[len-i-1])
            {
                break;
            }
        }
    if(i==len/2)
    {
        printf("given string is palidrome");
    }
    else
    {
        printf("given string is not  palidrome");
    }
        
    return 0;
}