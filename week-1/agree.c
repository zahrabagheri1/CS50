#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // when you useing strings use " and when you use single char use '
    char c = get_char("Do you agree?");
    if (c == 'y' || c == 'Y')
    {
        printf("Agree.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agree.\n");
    }
}