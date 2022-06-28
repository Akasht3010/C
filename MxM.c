#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, rows, columns, a[10][10], b[10][10], sum = 0;
    int Count = 1;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &i, &j);

    printf("Enter the matrix elements :\n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < i; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    printf("\n\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (rows = 0; rows < i; rows++)
    {
        sum = sum + a[rows][rows];
    }
    printf("The sum of the diagonal matrix is %d\n", sum);
// symmetric matrix 
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            b[columns][rows] = a[rows][columns];
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            if (a[rows][columns] != b[rows][columns])
            {
                Count++;
                break;
            }
        }
    }
    if (Count == 1)
    {
        printf("\n The Matrix that you entered is a Symmetric Matrix ");
    }
    else
    {
        printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
    }
    return 0;
}
