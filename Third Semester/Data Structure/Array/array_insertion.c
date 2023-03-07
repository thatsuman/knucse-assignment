// C Program to perform array insertion

#include <stdio.h>

int main () {
    int array[10] = {-1, 3, 5, 22, 77};

    int i, k, N, P;

    N = 5;

    printf ("The contents of the array are: \n");

    for (i = 0; i < N; i++)
        printf ("array[%d] = %d\n", i, array[i]);

    printf ("Enter the elements to be inserted: ");
    scanf ("%d", &P);

    printf ("\nEnter the index location where %d is to be inserted: ", P);
    scanf ("%d", &k);

    for (i = N; i >= k; i--)
        array[i+1] = array[i];

    array[k] = P;
    N = N + 1;

    printf ("\nThe contents of the array after insertion: \n");
    
    for (i = 0; i < N; i++)
        printf ("array[%d] =  %d\n", i, array[i]);

    return 0;
}