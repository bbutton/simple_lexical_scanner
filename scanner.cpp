//
// Created by Brian Button on 6/13/20.
//
#include <sstream>
#include <string>

#include "scanner.h"

using namespace std;

string Scanner::scan() {
    ostringstream buffer;

    int current = 0;
    do {
        current = is.get();
        if (current == EOF) return buffer.str();

        buffer << static_cast<char>(current);
    } while(current != EOF);

    return buffer.str();
}
