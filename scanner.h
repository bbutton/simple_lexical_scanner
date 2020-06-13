//
// Created by Brian Button on 6/13/20.
//

#ifndef SIMPLE_LEXICAL_SCANNER_SCANNER_H
#define SIMPLE_LEXICAL_SCANNER_SCANNER_H

#include <iosfwd>
#include <string>

class Scanner {
public:
    Scanner(std::istringstream & is) : is(is) {}

    std::string scan();

private:
    std::istringstream & is;
};


#endif //SIMPLE_LEXICAL_SCANNER_SCANNER_H
