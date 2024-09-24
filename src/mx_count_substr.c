#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) return -1;
    int counter = 0;
    char *s = mx_strstr(str, sub);

    while (s != NULL) {
        s = mx_strstr(s + 1, sub);
        counter++;
    }

    return counter;
}

