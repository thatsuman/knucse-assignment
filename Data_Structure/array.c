#include <stdio.h>

//Function for array Display 
void display (int arr[], int arr_size) {
    printf ("Array is: ");
    for (int i = 0; i < arr_size; i++)
        printf (" %d", arr[i]);
}


// Function for array traversal
void traversal (int arr[], int arr_size) {
    int n;

    printf ("For Array Traversal, there is: \n");
    printf ("1. Forward Traversal\n");
    printf ("2. Backward Traversal\n");
    printf ("Enter your choice: ");
    scanf ("%d", &n);

    switch (n) {
    case 1:
        printf ("Forward Traversed Array is: \n");
        for (int i = 0; i < arr_size; i++)
            printf (" %d", arr[i]);
        break;
    case 2:
        printf ("Backward Traversed Array is: \n");
        for (int i = arr_size - 1; i >= 0; i--)
            printf (" %d", arr[i]);
        break;
    default:
        printf ("------------Invalid Input-----------");
      
    }
}

//Function for element searching
void searching (int arr[], int arr_size) {
    int element, flag = 0, i;
    printf ("Enter the element you want to search: ");
    scanf ("%d", &element);

    for (i = 0; i < arr_size; i++) {
        if (arr[i] == element) {
            flag = 1;
            break;
        } 
    }
    (flag == 1) ? printf ("Element is present at position: %d", i+1) : printf ("Element is NOT FOUND");

}

//Function for element insertion
void insertion (int arr[], int arr_size) {
    int pos, ins_num;
    
    Enter_the_Position:
        printf ("In Which position you want to insert element?\n");
        scanf ("%d", &pos);
    
    if (pos > arr_size) {
        printf ("Oops! Array position doesn't exists. Please Insert between 0 to %d\n", arr_size-1);
        goto Enter_the_Position;
    }
    
    printf ("Enter the element: ");
    scanf ("%d", &ins_num);

    for (int i = arr_size-1; i >= pos-1; i--)
        arr[i+1] = arr[i];
    arr[pos-1] = ins_num;

    arr_size += 1;

    display (arr, arr_size);
}

//Main Function

int main () {
    int n, arr_size, arr[50];

    //No of elements in the array
    printf ("How many elements you want to enter:");
    scanf ("%d", &arr_size);

    //Input elements in the array
    printf ("Enter the elements into the array: ");
    for (int i = 0; i < arr_size; i++)
        scanf ("%d", &arr[i]);
    
    display (arr, arr_size);

    while (1) {
        printf ("\n----------MENU----------\n");
        printf ("1.Traversal\n");
        printf ("2.Searching\n");
        printf ("3.Sorting\n");
        printf ("4.Element Insertion\n");
        printf ("5.Element Deletion\n");
        printf ("0.Exit\n");
        printf ("\n------------------------\n");

        printf ("Enter the choice: ");
        scanf ("%d", &n);

        if (n == 0)
            break;
        else {
            switch (n) {
                case 1:
                    traversal (arr, arr_size);
                    break;
                case 2:
                    searching (arr, arr_size);
                    break;
                case 3:
                    // sorting (arr, arr_size);
                    break;
                case 4:
                    insertion (arr, arr_size);
                    break;
                case 5:
                    // deletion (arr, arr_size);
                    break;
                default:
                    printf ("------------Invalid Input-----------");
            }
        }
    }
    return 0;
}

