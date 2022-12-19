#include <stdio.h>
#include <stdlib.h>

int main () {
    int score = 0;

    while (score != 10) {
        score++;
        printf ("Score: %i \n", score);
    }

    return 0;
}