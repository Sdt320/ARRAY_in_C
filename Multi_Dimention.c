#include <stdio.h>

int main() {
    // Declare a 2D array of 3x3 integers
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Access elements
    printf("Element at (0,0): %d\n", matrix[0][0]);
    printf("Element at (1,2): %d\n", matrix[1][2]);

    // Modify an element
    matrix[2][2] = 10;

    // Print the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
