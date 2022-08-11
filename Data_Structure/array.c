#include <stdio.h>

// Array Traversal
void traversal (int arr[], int arr_num) {
    int n;

    printf ("For Array Traversal, there is: \n");
    printf ("1. Forward Traversal\n");
    printf ("2. Backward Traversal\n");
    printf ("Enter your choice: ");
    scanf ("%d", &n);

    switch (n) {
    case 1:
        printf ("Forward Traversed Array is: \n");
        for (int i = 0; i < arr_num; i++)
            printf (" %d", arr[i]);
        break;
    case 2:
        printf ("Backward Traversed Array is: \n");
        for (int i = arr_num - 1; i >= 0; i--)
            printf (" %d", arr[i]);
        break;
    default:
        printf ("------------Invalid Input-----------");
      
    }
}

//Array Searching
void searching (int arr[], int arr_num) {
    int element, flag = 0, i;
    printf ("Enter the element you want to search: ");
    scanf ("%d", &element);

    for (i = 0; i < arr_num; i++) {
        if (arr[i] == element) {
            flag = 1;
            break;
        } 
    }
    (flag == 1) ? printf ("Element is present at position: %d", i+1) : printf ("Element is NOT FOUND");

}

int main () {
    int n, arr_num, arr[20];

    printf ("How many numbers you want to entered:");
    scanf ("%d", &arr_num);
    printf ("Enter the Elements into the array: ");
    for (int i = 0; i < arr_num; i++)
        scanf ("%d", &arr[i]);

    printf ("Array is: ");
    for (int i = 0; i < arr_num; i++)
            printf (" %d", arr[i]);

    printf ("\n----------MENU----------\n");
    printf ("1.Traversal\n");
    printf ("2.Searching\n");
    printf ("3.Sorting\n");
    printf ("4.Element Insertion\n");
    printf ("5.Element Deletion\n");

    printf ("Enter the choice: ");
    scanf ("%d", &n);

    switch (n) {
    case 1:
        traversal (arr, arr_num);
        break;
    case 2:
        searching (arr, arr_num);
        break;
    default:
        printf ("------------Invalid Input-----------");
    }
    return 0;
}

