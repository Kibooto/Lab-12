#include <stdio.h>
#include <stdlib.h>

// Функція для створення динамічної матриці
int **createMatrix(int rows, int cols) {
    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
    }
    return matrix;
}

// Функція для звільнення памяті для динамічної матриці
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void calc(int **matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            
        }
    }
}

void remake(int **matrix, int rows) {
    printf("IN PROGRESS...");
}

// Basic func
int one() {
    int rows, cols;
    printf("Введіть розмір матриці: ");
    scanf("%d %d", &rows, &cols);

    // Створення матриць A та B
    int **A = createMatrix(rows, cols);

    // Ввід елементів матриць 
    printf("Введіть елементи матриці A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Елементи матриці:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    freeMatrix(A, rows);

}