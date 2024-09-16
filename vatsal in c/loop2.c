// #include <stdio.h>

// void main()
// {
//     int  n, y=0,m,r;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//     m = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         y = y + (r * r * r);
//         n = n / 10;
//     }
//     if (m == y)
//     {
//         printf("Armstrong");
//     }
//     else
//     {
//         printf("Not Armstrong");
//     }
// }

#include <stdio.h>

void main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("lowest factor is 2\n");
    }
    if (i % 3 == 0)
    {
        printf("lowest common factor is 3\n");
    }
    if (i % 5 == 0)
    {
        printf("lowest common factor is 5\n");
    }
    if (i % 7 == 0)
    {
        printf("lowest common factor is 7\n");
    }
    if (i % 11 == 0)
    {
        printf("it is also divided by 11");
    }
}
