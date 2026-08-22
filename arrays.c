#include <stdio.h>

int sum_array(const int *values, size_t count);

int main(void)
{
    int values[] = {4, 7, 1, 9, 3, 8, 6};
    size_t count = sizeof values / sizeof values[0];

    printf("Count: %zu\n", count);

    for (size_t i = 0; i < count; i++)
    {
        printf("Element %zu: %d\n", i, values[i]);
    }

    int sum = sum_array(values, count);

    printf("Sum: %d\n", sum);

    return 0;
}

int sum_array(const int *values, size_t count)
{
    int sum = 0;

    for (size_t i = 0; i < count; i++)
    {
        sum += values[i];
    }

    return sum;
}