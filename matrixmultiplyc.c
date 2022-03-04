#include <stdio.h>
int main()
{

    int m, n, o, p;
    printf("Enter the size of thee maxtrix1:\n");
    scanf("%d%d", &m, &n);
    int matrix1[m][n];
    printf("Enter the order of the matrix2\n");
    scanf("%d%d", &o, &p);
    int matrix2[o][p];
    int matrixR[m][p];
    int sum;

    if (n != o)
    {
        printf("The multiplication of matrix is not possible\n");
       
    }

    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter the matrix1[%d][%d] element:", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
    

    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter the matrix2[%d][%d] element:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The required matrix1 is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }
    printf("\n");
    }

        printf("The required matrix2 is :\n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }
    printf("\n");
    }

    // come to the multiplication calculation part
    int sum =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                sum =  sum + matrix1[i][k] * matrix2[k][j];
            }
            matrixR[i][j] = sum;

            sum = 0;
        }
    }

    printf("\n");
    printf("The multiplicatoin of the above matrix is :\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< p; j++)
        {
            printf("%d ", matrixR[i][j]);
        }
            printf("\n");
    }
    }



    return 0;
}
