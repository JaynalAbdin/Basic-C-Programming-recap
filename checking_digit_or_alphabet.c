#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("Is digit\n");
    }
    else
    {
        printf("Alphabet\n");
        if (x >= 'a' && x <= 'z')
        {
            printf("Is Small\n");
        }
        else
        {
            printf("Is Capital\n");
        }
    }

    return 0;
}