//
// Created by Brian Button on 6/13/20.
//
#include <assert.h>
#include <cstddef>
#include <sstream>
#include <iostream>

#include "scanner.h"

using namespace std;

void EmptyInputReturnsEOF() {
    istringstream is;
    Scanner scanner(is);
    string result = scanner.scan();
    assert(result.empty() == true);
}

void SingleCharacterReturnedAsToken() {
    istringstream is("a");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "a");
}

int main(int argc, char ** argv) {
    EmptyInputReturnsEOF();
    SingleCharacterReturnedAsToken();

    return 0;
}
