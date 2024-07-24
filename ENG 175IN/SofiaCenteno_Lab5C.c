#include <stdio.h>

// declaing functions for matrix operations
void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
void subtract_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
void multiply_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
void display_matrix(int matrix[3][3]);
int sum_right_diagonal(int matrix[3][3]);
void transpose_matrix(int matrix[3][3]);

int main() {
    // define matrices and result arrays
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result_add[3][3], result_subtract[3][3], result_multiply[3][3];
    
    // add two matrices
void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}
  
   // subtract two matrices
void subtract_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = matrix1[i][j] - matrix2[i][j];
}

   // multiply two matrices
void multiply_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
}
   // display a 3x3 matrix
void display_matrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

   // calculate sum of the right diagonal
int sum_right_diagonal(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][2 - i]; 
    }
    return sum; // return computed sum back to caller
}

   // compute the transpose
void transpose_matrix(int matrix[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            // swap elements matrix[i][j] and matrix[j][i]
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // display the transposed matrix
    display_matrix(matrix);
}
// perform matrix operations
    add_matrices(matrix1, matrix2, result_add);
    subtract_matrices(matrix1, matrix2, result_subtract);
    multiply_matrices(matrix1, matrix2, result_multiply);

    // original matrices
    printf("Matrix 1:\n");
    display_matrix(matrix1);
    printf("Matrix 2:\n");
    display_matrix(matrix2);

    // results
    printf("Sum of the matrices:\n");
    display_matrix(result_add);

    printf("Difference of the matrices:\n");
    display_matrix(result_subtract);

    printf("Product of the matrices:\n");
    display_matrix(result_multiply);

    // calculate and display sum of the right diagonal of matrix1
    int sum_diagonal = sum_right_diagonal(matrix1);
    printf("Sum of the right diagonal elements of Matrix 1: %d\n", sum_diagonal);

    // Display transpose of matrix1
    printf("Transpose of Matrix 1:\n");
    transpose_matrix(matrix1);

    return 0;
}
