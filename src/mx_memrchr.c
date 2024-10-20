#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *pchr_s = (unsigned char *)s;

    for (int i = n; i > 0; --i) {
        if (pchr_s[i] == c) return &pchr_s[i];
    }
    return NULL;
}

