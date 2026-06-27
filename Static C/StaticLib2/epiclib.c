#include "pch.h"
#include "framework.h"
#include <stdio.h>

void get_input(int* a, int* b)
{
    printf("Enter two numbers: ");
    scanf_s("%d %d", a, b);
}

int add(int a, int b)
{
    return a + b;
}

void print_result(int result)
{
    printf("Result: %d\n", result);
}
