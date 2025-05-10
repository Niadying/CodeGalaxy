#include <stdio.h>
#include <stdlib.h>

#define MAX 5  

typedef struct {
    int items[MAX];
    int front, rear;
} Queue;


void initialize(Queue *q) {
    q->front = -1;
    q->rear = -1;
}


int isEmpty(Queue *q) {
    return q->front == -1;
}


int isFull(Queue *q) {
    return q->rear == MAX - 1;
}


void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}


int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int dequeuedValue = q->items[q->front];
    printf("Dequeued: %d\n", dequeuedValue);
    
    if (q->front == q->rear) {

        q->front = -1;
        q->rear = -1;
    } else {
        q->front++;
    }
    return dequeuedValue;
}


void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    dequeue(&q);
    display(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    display(&q);

    dequeue(&q);
    dequeue(&q);
    display(&q);

    return 0;
}