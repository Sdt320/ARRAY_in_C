# ARRAY_in_C
In C, arrays are a fundamental way to store and manage collections of data. Here’s a basic overview of how to work with arrays in C:

### Declaring and Initializing Arrays
An array can be declared by specifying the type of its elements and the number of elements. For example:

```c
#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Initialize an array of 5 integers
    int values[5] = {1, 2, 3, 4, 5};

    // Access elements of the array
    printf("First element: %d\n", values[0]);
    printf("Third element: %d\n", values[2]);

    return 0;
}
```

### Accessing and Modifying Array Elements
Array elements are accessed using the index, which starts from 0. You can also modify elements by assigning new values:

```c
#include <stdio.h>

int main() {
    int values[5] = {1, 2, 3, 4, 5};

    // Modify the second element
    values[1] = 10;

    // Print all elements
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, values[i]);
    }

    return 0;
}
```

### Multi-dimensional Arrays
C also supports multi-dimensional arrays. For example, a 2D array can be declared and used as follows:

```c
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
```

### Common Pitfalls
- **Out of bounds access**: Accessing an array element outside its declared size leads to undefined behavior.
- **Initialization**: If an array is partially initialized, the remaining elements are set to zero (for static and global arrays).
- **Pointer and Array Relationship**: An array name can be used as a pointer to its first element, but arrays and pointers are not the same.

### Example: Sum of Array Elements
Here is a simple example to calculate the sum of elements in an array:

```c
#include <stdio.h>

int main() {
    int values[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += values[i];
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}
```

These are the basics of working with arrays in C. Let me know if you need more advanced topics or examples!
