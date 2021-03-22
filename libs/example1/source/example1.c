#include "example1.h"
#include <stdint.h>

size_t NewLineIndex(const char *buffer, size_t bufferSize) {
    for (size_t index = 0; index < bufferSize; index++) {
        if (buffer[index] == '\n') {
            return index;
        }
    }
    return SIZE_MAX;
}

