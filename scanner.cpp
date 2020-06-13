//
// Created by Brian Button on 6/13/20.
//
#include <sstream>
#include <string>
#include <cctype>

#include "scanner.h"

using namespace std;

string Scanner::scan() {
    ostringstream buffer;

    int current = 0;
    int next;
    do {
        current = is.get();
        next = is.peek();

        if (current == EOF) return buffer.str();

        buffer << static_cast<char>(current);
        if(isalpha(static_cast<char>(next)) == false) return buffer.str();

    } while(current != EOF);
}
