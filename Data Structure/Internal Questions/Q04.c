/*
Q04. Write a program to implement stack using array.
*/

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE], top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Error: Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
    pop();
    display();

    return 0;
}
