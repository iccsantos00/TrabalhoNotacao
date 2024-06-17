#include "postfix_evaluator.h"
#include "stack.h"
#include "operations.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double evaluatePostfix(char* expression) {
    Stack stack;
    initStack(&stack);
    char* token = strtok(expression, " ");
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(&stack, atof(token));
        } else {
            double val2 = pop(&stack);
            double val1 = pop(&stack);
            switch (token[0]) {
                case '+': push(&stack, add(val1, val2)); break;
                case '-': push(&stack, subtract(val1, val2)); break;
                case '*': push(&stack, multiply(val1, val2)); break;
                case '/': push(&stack, divide(val1, val2)); break;
                case '^': push(&stack, power(val1, val2)); break;
                case 'r': push(&stack, root(val1)); break;
                case 's': push(&stack, sine(val1)); break;
                case 'c': push(&stack, cosine(val1)); break;
                case 't': push(&stack, tangent(val1)); break;
                case 'l': push(&stack, logarithm(val1)); break;
                default: printf("Invalid operator: %s\n", token); exit(1);
            }
        }
        token = strtok(NULL, " ");
    }
    return pop(&stack);
}
