/*
Q02. Write a program to read a 2D array marks which stores the marks of five students in three subjects. Write a program to display the highest marks in each subject.
*/

#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    printf("Enter marks of 5 students in 3 subjects: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Student %d, Subject %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n");

    int highest;
    for (j = 0; j < 3; j++) {
        highest = marks[0][j];
        for (i = 0; i < 5; i++) {
            if (marks[i][j] > highest) {
                highest = marks[i][j];
            }
        }
        printf("Highest marks in subject %d: %d\n", j+1, highest);
    }

    return 0;
}
