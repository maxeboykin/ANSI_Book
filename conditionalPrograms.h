//
// Created by Max Boykin on 4/13/22.
//
#include <stdio.h>
#ifndef ANSI_BOOK_CONDITIONALPROGRAMS_H
#define ANSI_BOOK_CONDITIONALPROGRAMS_H

#endif //ANSI_BOOK_CONDITIONALPROGRAMS_H

void evenOrOdd()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // True if remainder is 0
    if (number %2 == 0 )
        printf("%d is an even number.", number);
    else
        printf("%d is an odd number", number);
    return;
}