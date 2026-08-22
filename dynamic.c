#include <stdio.h>
#include <stdlib.h>
#include "record.h"
 
int main(void)
{
    Record *record = malloc(sizeof *record);
 
    if (record == nullptr) {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }
 
    record->id = 1;
    record->value = 42.5;
 
    printf("id=%d value=%.1f\n", record->id, record->value);
 
    // free(record);
 
    return EXIT_SUCCESS;
}
