cmake_minimum_required(VERSION 3.16)
project(simple_lexical_scanner)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(simple_lexical_scanner main.cpp scanner.cpp scanner.h)
add_executable(scanner_tests ScannerTests.cpp scanner.cpp scanner.h)

target_include_directories(simple_lexical_scanner PUBLIC
        "${PROJECT_SOURCE_DIR}"
        )
