#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "stats.h"
#include "record.h"
#include "node.h"

int main(void)
{
    int values[] = {4, 7, 1, 9, 3, 8, 6};
    size_t count = sizeof values / sizeof values[0];

    int result = sum_array(values, count);

    printf("Sum = %d\n", result);

    Record record = {1, 25.5};

    printf("ID: %d\n", record.id);
    printf("Value: %.2f\n", record.value);

    Record *record_ptr = &record;

    printf("ID through pointer: %d\n", record_ptr->id);
    printf("Value through pointer: %.2f\n", record_ptr->value);

    record_ptr->value = 50.75;

    printf("Original value after change: %.2f\n", record.value);

        Record *dynamic_record = malloc(sizeof *dynamic_record);

    if (dynamic_record == nullptr)
    {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }

    dynamic_record->id = 2;
    dynamic_record->value = 42.5;

    printf("Dynamic record: id=%d value=%.1f\n",
           dynamic_record->id,
           dynamic_record->value);

    free(dynamic_record);

    Node *node = malloc(sizeof *node);

    if (node == nullptr)
    {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }

    node->value = 100;
    node->next = nullptr;

    printf("Node value: %d\n", node->value);

    free(node);

return EXIT_SUCCESS;

}