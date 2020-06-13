//
// Created by Brian Button on 6/13/20.
//
#include <sstream>
#include <string>

#include "scanner.h"

using namespace std;

string Scanner::scan() {
    int current = is.get();
    if(current == EOF) return string();

    ostringstream buffer;
    buffer << static_cast<char>(current);

    return buffer.str();
}
