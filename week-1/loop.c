#include <cs50.h>
#include <stdio.h>

// void meow(void);
// void meow(int n);

// int main(void)
// {
// 1.
// Printf ("meow. \n");
// Printf ("meow. \n");
// Printf ("meow. \n");

// 2.
// int i = 3;
// while (i > 0)
// {
//     printf("meow. \n");
//     i--;
// }

// or 3. Most populler
// int i = 0;
// While(i < 3)
// {
//     printf("meow. \n");
//     i++;
// }

// 4. loop forever
// while (ture)
// {
// Printf ("meow. \ n")
// }

// 5.
// for (int i = 0; i < 3; i++)
// {
//     meow();
// }

// 6.
// meow(4);

// 7.
//     int n = get_int("Number: ");
//     meow(n);
// }

// 5.
// void meow(void)
// {
//     printf("meow \n");
// }

// 6.
// void meow(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("meow \n");
//     }
// }

// 7.
// void meow(int n);

// int main(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Number: ");
//     }
//     while (n < 1);
//     meow(n);
// }

// void meow(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("meow\n");
//     }
// }

// 8.
int get_positive_int(void);
void meow(int n);

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}