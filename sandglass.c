//Find the largest and smallest element in a 1D array.
#include<stdio.h>
int main ()
{
    int n,i,j,k;
    printf("Enter n:");
    scanf("%d",&n);
    //1stline
    for (i=1;i<=2*n-1;i++)
    printf("* ");
    printf("\n");
    //upper triangle
    for (i=2 ; i<=n-1 ; i++)
    { //space
        for (j=1;j<=i-1;j++)
        printf("  ");
    //1st star
        printf("* ");
    //space inside
        for(k=1;k<=2*(n-i)-1;k++)
        printf("  ");
    //2nd star
        printf("*\n");
    }

    //mid
    
    for (i=1;i<=n-1;i++)
    printf("  ");

    printf("*\n");
    //lower triangle

    for (i=2 ; i<=n-1 ; i++)
    {//space
     for(j=1;j<=n-i;j++)
     printf("  ");
    //1st star
    printf("* ");
    //space inside
    for(int k=1; k<=2*i-3 ; k++)
    printf("  ");
    //2nd star
    printf("*\n");
    }
    //last line
    for (i=1;i<=2*n-1;i++)
    printf("* ");
}