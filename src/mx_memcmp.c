#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *pchr_s1 = (unsigned char *)s1;
    unsigned char *pchr_s2 = (unsigned char *)s2;

    for (int i = 0; i < n; ++i) {
        if (pchr_s1[i] != pchr_s2[i]) return pchr_s1[i] - pchr_s2[i];
    }
    return 0;
}
