// #include<stdio.h>

// void main(){
//     int a=43;
//     int b=5;
//     a>b?printf("a is greater"):printf("b is graeter");
// }

// Condition ? expression if -true: expression if-false

// It is a About Switch Case Control instruction
// #include<stdio.h>

// void main(){
//     int a;
//     printf("Enter the value of a\n");
//     scanf("%d",&a);

//     switch (a)
//     {
//     case 1:
//     printf("you entered 1\n");
//         break;
//     case 2:
//     printf("you entered 2\n");
//         break;
//     case 3:
//     printf("you entered 3\n");
//         break;
//     case 4:
//     printf("you entered 4\n");
//         break;
// // I have used break because i only want one of the case to run at a __TIME__
//     default:
//     printf("Nothing Match");
//         break;
//     }
// }

// #include<stdio.h>

// void main(){
//     int i,x=97;
//     char j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=100;j>=x;j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//         x++;
//     }
// }

// #include<stdio.h>

// void main(){
//     int i,x=100;
//     char j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=100;j>=x;j--)
//         {
//             printf("%c",j);
//         }
//         x--;
//         printf("\n");
//     }
// }

// #include<stdio.h>

// void main()
// {
//     int i,n=4,x=65,c=3,v=67;
//     char j;

//     for(i=1;i<=4;i++)
//     {
//         for( j = c; j > 0; j--)
//         {
//             printf(" ");
//         }
//         for(j=65;j<=x;j++)
//         {
//             printf("%c",j);
//         }
//         for(j=x-1;j>=65;j--)
//         {
//             printf("%c",j);
//         }
//         x++;
//         c--;
//         printf("\n");
//     }
//     c=3;
//     for(i=1;i<=3;i++)
//     {
//         for( j = 3; j <= c; j++)
//         {
//             printf(" ");
//         }
//         for(j=65;j<=v;j++)
//         {
//             printf("%c",j);
//         }
//         for(j=v-1;j>=65;j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//         v--;
//         c++;
//     }
// }

#include <stdio.h>

void main()
{
    int i, n = 4, x = 65, c = 3, v = 67;
    char j;
    for (i = 1; i <= n; i++)
    {
        for (j = c; j  >0; j--)
        {
            printf(" ");
        }
        for (j = 65; j <= x; j++)
        {
            printf("%c", j);
        }
        for (j = x - 1; j >= 65; j--)
        {
            printf("%c", j);
        }
        x++;
        c--;
        printf("\n");
    }
    c = 1;
    for (i = 1; i < n; i++)
    {   
        for (j = 1; j <= c; j++)
        {
            printf(" ");
        }
        for (j = 65; j <= v; j++)
        {
            printf("%c", j);
        }
        for (j = v - 1; j >= 65; j--)
        {
            printf("%c", j);
        }
        v--;
        c++;
        printf("\n");
    }
}
