//
// Created by Brian Button on 6/13/20.
//
#include <sstream>
#include <string>
#include <cctype>

#include "scanner.h"

using namespace std;

enum CharType { Char, Digit, Unknown = -1 };

namespace {
    CharType classifyCharacter(char c) {
        if(isalpha(c)) return Char;
        if(isdigit(c)) return Digit;
        return Unknown;
    }
}

string Scanner::scan() {
    ostringstream buffer;

    int current = 0;
    int next;
    do {
        current = is.get();
        next = is.peek();

        CharType charType = classifyCharacter(static_cast<char>(current));

        switch(charType) {
            case Char:
                buffer << static_cast<char>(current);
                if(isalpha(static_cast<char>(next)) == false) return buffer.str();
                break;

            case Digit:
                buffer << static_cast<char>(current);
                break;

            default:
                return buffer.str();
        }
    } while(current != EOF);

    return string();
}
