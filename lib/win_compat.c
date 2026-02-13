#ifdef _WIN32
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void srandom(unsigned int seed) {
    srand(seed);
}

long random(void) {
    return rand();
}

int getlogin_r(char *buf, size_t bufsize) {
    DWORD len = (DWORD)bufsize;
    if (GetUserNameA(buf, &len)) {
        return 0;
    }
    return -1;
}
#endif
