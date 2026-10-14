
#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            count++;
        }
    }

    printf("Frequency of a = %d", count);

    return 0;
}
