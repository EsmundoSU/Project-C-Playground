#include <stdio.h>
#include "example1.h"

const char TestText1[] = "Hello World! APE\nWhere is my mind\n";

int main() {
    size_t indexOfNewLine = NewLineIndex(TestText1, sizeof TestText1);
    printf("indexOfNewLine - TestText1 is: %u", (unsigned) indexOfNewLine);
}
