#include<stdio.h>
void main()
{   
    int a[10][10],b[10][10],n,m,i,j,product[10][10],sum = 0;
    printf("Enter the row: ");
    scanf("%d",&n);
    printf("Enter the column: ");
    scanf("%d",&m);
    printf("Enter the first matrix element: \n");
    for ( i=0;i<n;i++)
    {
        for ( j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("First matrix:");
    for ( i = 0; i < n; i++)
    {   
        printf("\n");
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nEnter the second matrix element: \n");
    for ( i=0;i<n;i++)
    {
        for ( j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("Second matrix is:");
    for ( i = 0; i < n; i++)
    {   
        printf("\n");
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           for (int k = 0; k < n; k++)
           {
               sum = sum + a[i][k]*b[k][j];
               product[i][j]=sum;
           }
        
        sum = 0;
        }
    }  
    printf("\nproduct of matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix will be: \n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%d  ",a[k][i]);
        }
        printf("\n");
    }
}