
// #include <stdio.h>

// void main()
// {
//     int i = 2, n, flag = 1;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     do
//     {
//         if (n % i == 0)
//         {
//             printf("number is not prime\n");
//             flag = 0;
//             break;
//         }
//         i++;
//     } while (i < n);
//     if(flag==1)
//     {
//         printf("its a prime number\n");
//     }
// }
// It is done with the DoWhile condition

// #include<stdio.h>

// void main(){
//     int i=2,n,flag=1;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     while ((i<n))
//     {
//         if(n%i==0);
//         {
//             printf("Number Prime");
//             flag=0;
//             break;
//         }
//         i++;
//     }
//     if(flag==1)
//     printf("prime");
// }
// // It is Done with while Loop

#include <stdio.h>

void main()
{
    int a, b, c, n = 100;
    printf("Enter the marks");
    scanf("%d", &a);
    printf("Enter the marks ");
    scanf("%d", &b);
    printf("enter the marks");
    scanf("%d", &c);
    if (a < 33 && b < 33 && c < 33)
    {
        printf("you pass the exam");
    }
    else
    {
        printf("you are fail because of less marks");
    }
}
