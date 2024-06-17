#include "stack.h"
#include <stdio.h>

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, double value) {
    if (!isFull(s)) {
        s->items[++(s->top)] = value;
    } else {
        printf("Stack is full\n");
    }
}

double pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    } else {
        printf("Stack is empty\n");
        return -1; // Error value
    }
}
