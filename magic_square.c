#include<stdio.h>
void main()
{
    int i,j,r,c,n;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    n=r;
    if(r==c)
    {
        int s=2*n+2;
        char a[n][n],sum[s];
        //input matrix value 
        for(i=0;i<n;i++)
        {  
            for(j=0;j<n;j++)
            {
                printf("A[%d][%d]=",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<s;i++)
            sum[i]=0;
        //main logic to find sum of each row, column and diagonal
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum[i]=sum[i]+a[i][j];
                sum[i+n]=sum[i+n]+a[j][i];
                if(i==j)
                {
                    sum[s-2]=sum[s-2]+a[i][j];
                    sum[s-1]=sum[s-1]+a[i][n-j-1];
                }
            }
            if(sum[i]!=sum[i+n])
                break;
        }
        //checking whether all sum is equal to a constant or not
        for(i=0;i<s;i++)
        {
            if(sum[0]!=sum[i])
            {
                printf("The given entered matrix is not magic square\n");
                break;
            }
            if(i==(s-1))
                printf("The matrix is magic square\n");
        }
    }
    else
        printf("This order matrix cannot be magic square\n");
}