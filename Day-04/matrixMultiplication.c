#include<stdio.h>

void read(int x[5][5], int r, int c) 
{
    for(int i=0; i<r; i++ )
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
} 
void print(int y[5][5], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
        
}
void matrixMul(int a[5][5], int b[5][5], int c[5][5], int m, int n, int p, int q)
{
    printf("\n possible\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<q; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<n; k++)
            {
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
        }
       
    }
     
      printf("done \n");
}
int main() 
{
    int a[5][5], b[5][5], c[5][5];
    int m, n, p, q;
    printf("enter number of rows and columsn of matrix a: ");
    scanf("%d%d", &m, &n);
    printf("enter number of rows and columsn of matrix a: ");
    scanf("%d%d", &p, &q);
    read(a, m, n);
    read(b, p, q);
    print(a, m, n);
    print(b, p, q);
    matrixMul(a,b,c, m, n, p, q);
    print(c,m,q);
    return 0;
   
    
    
    
}
