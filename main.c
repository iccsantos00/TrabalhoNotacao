#include <stdio.h>
#include "postfix_evaluator.h"

int main() {
    char expression1[] = "3 4 + 5 *";
    printf("Postfix: %s\n", expression1);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression1));

    char expression2[] = "7 2 * 4 +";
    printf("Postfix: %s\n", expression2);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression2));

    char expression3[] = "8 5 2 4 + * +";
    printf("Postfix: %s\n", expression3);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression3));

    char expression4[] = "6 2 / 3 + 4 *";
    printf("Postfix: %s\n", expression4);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression4));

    char expression5[] = "9 5 2 8 * 4 + * +";
    printf("Postfix: %s\n", expression5);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression5));

    char expression6[] = "2 3 + log 5 /";
    printf("Postfix: %s\n", expression6);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression6));

    char expression7[] = "10 log 3 ^ 2 +";
    printf("Postfix: %s\n", expression7);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression7));

    char expression8[] = "45 60 + 30 cos *";
    printf("Postfix: %s\n", expression8);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression8));

    char expression9[] = "0.5 45 sen 2 ^ +";
    printf("Postfix: %s\n", expression9);
    printf("Evaluated value: %lf\n", evaluatePostfix(expression9));

    return 0;
}
