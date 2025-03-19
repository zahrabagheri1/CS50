#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     int x = get_int("x: ");
//     int y = get_int("y: ");

//     // 1.
//     // int z = x + y;
//     // printf("%i\n", z);

//     // 2.
//     printf("%i\n", x + y);

// }

// 4.
// int main(void)
// {
//     int x = get_int("x: ");
//     printf("%i\n", x * 2);
// }

// 5.
// int main(void)
// {
//     // integer overfllow
//     // int dollars = 1;

//     long dollars = 1;
//     while (true)
//     {
//         // char c = get_char("Here's $%i. Double it and give it to the next person?", dollars);
//         char c = get_char("Here's $%li. Double it and give it to the next person?", dollars);
//         if (c == 'y')
//         {
//             dollars *= 2;
//         }
//         else
//         {
//             break;
//         }
//     }
//     // printf("Here's $%i.\n", dollars);
//     printf("Here's $%li.\n", dollars);
// }

// 6.
int main(void)
{
    // trunction => if your num int your result is int

    int x = get_int("x: ");
    int y = get_int("y: ");

    // floating-point imprecision
    // ints only use 32 bits, floats also use only 32 bits.
    printf("%.50f\n",(float) x / y);
}