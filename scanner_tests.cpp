//
// Created by Brian Button on 6/13/20.
//
#include <assert.h>
#include <sstream>

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

void TwoCharactersReturnedAsSingleToken() {
    istringstream is("ab");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "ab");
}

void SingleCharacterFollowedByDigitReturnsSingleCharToken() {
    istringstream is("a2");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "a");
}

void MultiCharacterStringTerminatedBySpaceReturnsToken() {
    istringstream is("aasdfasdfa ");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "aasdfasdfa");
}

int main(int argc, char ** argv) {
    EmptyInputReturnsEOF();
    SingleCharacterReturnedAsToken();
    TwoCharactersReturnedAsSingleToken();
    SingleCharacterFollowedByDigitReturnsSingleCharToken();
    MultiCharacterStringTerminatedBySpaceReturnsToken();

    return 0;
}
