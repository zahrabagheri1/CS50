#include <stdio.h>

// 1.
// int main(void)
// {
//     // print("????\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// 2.
// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("#\n");
//     }
// }

// 3.
// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("#####\n");
//     }
// }

// 4.
// int main(void)
// {
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {

//             printf("#");
//         }
//         printf("\n");
//     }
// }

// 5.
void print_row(int n);

int main(void)
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
