// C program to traverse each element of an array and print its value

#include <stdio.h>

void forwardTraverse (int*, int);
void backwardTraverse (int*, int);

void main () {
    int arr[5] = {2, 6, 7, 3, 8};
    int N = 5;

    printf ("Press any key to perform array traversal and display its elements: \n");

    printf ("\nForward Traversal: \n");
    forwardTraverse (arr, N);
    printf ("\nBackward Traversal: \n");
    backwardTraverse (arr, N);
}

void forwardTraverse (int *array, int size) {
    for (int i = 0; i < size; i++)
        printf ("array[%d] = %d\n", i, array[i]);
}

void backwardTraverse (int *array, int size) {
    for (int i = size-1; i >= 0; i--)
        printf ("array[%d] = %d\n", i, array[i]);
}