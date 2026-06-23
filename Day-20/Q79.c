#include <stdio.h>
int main()
 {
    int rows, column, i, j;
    int matrix[100][100];
    int rowSum;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &column);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < column; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf(" Row-Wise Sum Result ");
    for (i = 0; i < rows; i++) 
    {
        rowSum = 0; 
        for (j = 0; j < column; j++) 
        {
            rowSum += matrix[i][j]; 
        }
        printf("Sum of elements in Row %d = %d\n", i + 1, rowSum);
    }
    return 0;
}