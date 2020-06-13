cmake_minimum_required(VERSION 3.16)
project(simple_lexical_scanner)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(scanner_tests scanner_tests.cpp scanner.cpp scanner.h)

target_include_directories(scanner_tests PUBLIC
        "${PROJECT_SOURCE_DIR}"
        )
