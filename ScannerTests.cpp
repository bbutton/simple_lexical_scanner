//
// Created by Brian Button on 6/13/20.
//
#include <assert.h>
#include <cstddef>

#include "scanner.h"

void EmptyInputReturnsEOF() {
    Scanner scanner;
    const char * result = scanner.scan();
    assert(result == NULL);
}

int main(int argc, char ** argv) {
    EmptyInputReturnsEOF();

    return 0;
}
