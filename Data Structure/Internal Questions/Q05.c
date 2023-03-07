/*
Q05. Write a program on queue implementation using array.
*/

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

int dequeue() {
    int data;
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    } else {
        data = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        return data;
    }
}

int main() {
    enqueue(5);
    enqueue(7);
    enqueue(9);

    printf("Dequeued value: %d\n", dequeue());
    printf("Dequeued value: %d\n", dequeue());
    printf("Dequeued value: %d\n", dequeue());

    return 0;
}
