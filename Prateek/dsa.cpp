#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int *arr;
    int front, rear, size;
} Queue;

Queue* createQueue(int size) {
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->size = size;
    q->arr = (int*)malloc(size * sizeof(int));
    q->front = q->rear = -1;
    return q;
}

int isEmpty(Queue *q) {
    return q->front == -1;
}

int isFull(Queue *q) {
    return q->rear == q->size - 1;
}

void enqueue(Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue.\n");
        return;
    }
    if (isEmpty(q))
        q->front = 0;

    q->arr[++q->rear] = data;
    printf("Enqueued: %d\n", data);
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }
    printf("Dequeued: %d\n", q->arr[q->front]);

    if (q->front == q->rear)
        q->front = q->rear = -1; 
    else
        q->front++;
}

int frontElement(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return q->arr[q->front];
}

void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->arr[i]);
    printf("\n");
}

void freeQueue(Queue *q) {
    free(q->arr);
    free(q);
}

int main() {
    Queue *q = createQueue(5);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    display(q);
    dequeue(q);
    display(q);
    freeQueue(q);
    return 0;
}
