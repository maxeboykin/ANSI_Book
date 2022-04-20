//
// Created by Max Boykin on 4/19/22.
//
#include <stdbool.h>
#include <math.h>
#ifndef ANSI_BOOK_FUNCTIONRECURSION_H
#define ANSI_BOOK_FUNCTIONRECURSION_H

#endif //ANSI_BOOK_FUNCTIONRECURSION_H

bool isEven()
{
    int num;
    bool even;

    printf("Enter a number: ");
    scanf("%d", &num);

    even = !(num & 1);

    if(even){
        printf("The number is even.");
    }
    else {
        printf("The number is odd.");
    }
    return even;
}

int convertBinaryToDecimal()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%11d", &n);
    long long original = n;

    int decimalNumber = 0, i = 0, remainder;
    while(n!=0)
    {
        remainder = n % 10; //remainder is last digit only
        n /= 10;
        decimalNumber += remainder*pow(2, i);
        ++i;
    }


    printf("%lld in binary = %d in decimal", original, decimalNumber);
}