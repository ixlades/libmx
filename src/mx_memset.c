#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *pb = (unsigned char *)b;
    
    for (int i = 0; i < len; ++i) {
        pb[i] = (unsigned char)c;
    }
    return b;
}
