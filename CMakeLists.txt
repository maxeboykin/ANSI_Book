cmake_minimum_required(VERSION 3.21)
project(ANSI_Book C)

set(CMAKE_C_STANDARD 90)

add_executable(ANSI_Book ANSI_Activities/firstProgram.c main.c ANSI_Activities/countingSpaces.c ANSI_Activities/countingDigitsWithArrays.c ANSI_Activities/fahreinheitPowerFunctions.c ANSI_Activities/longestLine.c ANSI_Activities/binarySearch.c ANSI_Activities/itoaAndTrim.c ANSI_Activities/getline_strindex.c ANSI_Activities/getop_getch_ungetch.c conditionalPrograms.h ANSI_Activities/atoi_lower.h ANSI_Activities/polishcalculator.h ANSI_Activities/loopPrograms.h ANSI_Activities/switchCase.h ANSI_Activities/functionRecursion.h ANSI_Activities/pointers.h ANSI_Activities/array.h ANSI_Activities/matrix.h ANSI_Activities/structure.h)
