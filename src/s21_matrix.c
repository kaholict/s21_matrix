#include "s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
    int func_status = 0;
    if (rows < 1 || columns < 1)
        func_status = 1;
    else {
        result->rows = rows;
        result->columns = columns;
        result->matrix = calloc(rows, sizeof(double*));
        if (result->matrix != NULL)
            for (int i = 0; i < columns; i++) {
                result->matrix[i] = calloc(rows, sizeof(double));
                if (result->matrix[i] == NULL) {
                    func_status = 2;
                    break;
                }
            }
        else
            func_status = 2;
    }
    return func_status;
}

void s21_remove_matrix(matrix_t *A) {
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
}

int s21_transpose(matrix_t *A, matrix_t *result) {
}

int s21_determinant(matrix_t *A, double *result) {
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
}
