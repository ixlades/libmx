#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
    int counter = 0;
    bool flag = true;
    while (*str != '\0') {
        if (str[0] == delimiter && !flag) {
            flag = false;
            str++;
        }
        if (*str == delimiter && *(str + 1) != '\0') {
            while (*str == delimiter && *(str + 1) != '\0') {
                ++str;
            }
            ++counter;
        }
        if (*(str + 1) == '\0' && *(str) == delimiter ) {
            str++;
            counter--;
        }
        ++str;
    }
    if (counter) counter++;
    return counter;
}

