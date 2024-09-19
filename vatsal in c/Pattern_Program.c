
#include <stdio.h>
void main()
{
    int i, j, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        // For the upper half
    }
    for (i = 4; i > 0; i--)
    {
        for (j = 4; j <= n; j++)
        {
            printf(" ");
        }
        for (j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 2; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        n = n + 1;
    } 
    //  For the lower half
}



// #include <stdio.h>      It is a pattern Program 
// void main()
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for ( i=4; i >=1; i--)
//     {
//         for (j = i; j >=1;  j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }



