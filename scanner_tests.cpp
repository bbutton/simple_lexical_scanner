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

void SingleDigitReturnsToken() {
    istringstream is("1");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "1");
}

void MultipleDigitsReturnsToken() {
    istringstream is("13323");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "13323");
}

void SingleDigitFollowedByAlphaReturnsDigitAsToken() {
    istringstream is("1d");
    Scanner scanner(is);

    string result = scanner.scan();

    assert(result == "1");
}

void MultipleTokensCanBeReturnedFromInputStream() {
    istringstream is("12sdg 1 22 ee ee4 3 aa 234");
    Scanner scanner(is);

    assert(scanner.scan() == "12");
    assert(scanner.scan() == "sdg");
    assert(scanner.scan() == "1");
    assert(scanner.scan() == "22");
    assert(scanner.scan() == "ee");
    assert(scanner.scan() == "ee");
    assert(scanner.scan() == "4");
    assert(scanner.scan() == "3");
    assert(scanner.scan() == "aa");
    assert(scanner.scan() == "234");
}

int main(int argc, char ** argv) {
    EmptyInputReturnsEOF();

    SingleCharacterReturnedAsToken();
    TwoCharactersReturnedAsSingleToken();
    SingleCharacterFollowedByDigitReturnsSingleCharToken();
    MultiCharacterStringTerminatedBySpaceReturnsToken();

    SingleDigitReturnsToken();
    MultipleDigitsReturnsToken();
    SingleDigitFollowedByAlphaReturnsDigitAsToken();

    MultipleTokensCanBeReturnedFromInputStream();

    return 0;
}
