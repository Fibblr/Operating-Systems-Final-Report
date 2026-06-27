#include <stdio.h>

void get_input(int *a, int *b) 
{
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}
int add(int a, int b) 
{
    return a + b;
}

void print_result(int result) 
{
    printf("Result: %d\n", result);
}