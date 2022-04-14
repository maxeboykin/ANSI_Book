cmake_minimum_required(VERSION 3.21)
project(ANSI_Book C)

set(CMAKE_C_STANDARD 90)

add_executable(ANSI_Book ANSI_Activities/firstProgram.c main.c ANSI_Activities/countingSpaces.c ANSI_Activities/countingDigitsWithArrays.c ANSI_Activities/fahreinheitPowerFunctions.c ANSI_Activities/longestLine.c ANSI_Activities/atoi_lower.c ANSI_Activities/binarySearch.c ANSI_Activities/itoaAndTrim.c ANSI_Activities/getline_strindex.c ANSI_Activities/polishcalculator.c ANSI_Activities/getop_getch_ungetch.c conditionalPrograms.h)
