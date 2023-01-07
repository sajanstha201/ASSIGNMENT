#include<stdio.h>
void main()
{
    int n,i,j,temp,r,c;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c)
    {
        n=r;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%d",&a[i][j]);
            }   
        printf("The entered matrix is \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            temp=a[i][i];
            a[i][i]=a[i][n-i-1];
            a[i][n-i-1]=temp;
        }
        printf("The changed matix is \n");
        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                     printf("%d\t",a[i][j]);
                printf("\n");
            }
    }
    else
        printf("Entered order matrix's diagonal cannot be interchange.\n");
}