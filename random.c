#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

void rand_string(char *string, size_t length)
{
    for (int i = 0; i < length; i++) {
        string[i] = 'a' + (rand() % 26);    // confined to lowercase letters a-z
    }
    string[length] = '\0';                  // null-terminate the string
}
