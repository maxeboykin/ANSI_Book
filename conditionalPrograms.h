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
        printf("%d is an even number.\n", number);
    else
        printf("%d is an odd number\n", number);
    return;
}

void returnLargestOfThree()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.", num1);
    }
    else if(num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.", num2);
    }
    else if(num3 >= num1 && num3 >= num2) {
        printf("%d is the largest number.", num3);
    }
}

void checkLeapYear()
{
    int year;

    printf("Enter any year: ");

    scanf("%d", &year);

    year % 400 == 0 ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);
    return;
}