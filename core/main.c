#include <stdio.h>
#include "example1.h"

const char TestText1[] = "Hello World! APE Where is my mind ";

int main() {
    const char *names = "sdasad`";
    for (int i = 0; i < 100; ++i) {
        puts(&names[i]);
    }
    size_t indexOfNewLine = NewLineIndex(TestText1, sizeof TestText1);
    printf("indexOfNewLine - TestText1 is: %u", (unsigned) indexOfNewLine);
}
