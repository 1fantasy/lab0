#include <stdio.h>

int main(void)
{
    int score = 10;
    int *score_ptr = &score;

    printf("Score: %d\n", score);

    printf("Address: %p\n", (void *)score_ptr);

    printf("Value through pointer: %d\n", *score_ptr);

    *score_ptr = 25;

    printf("Score after change: %d\n", score);

    return 0;
}