//
// Created by Max Boykin on 4/19/22.
//
#include <stdbool.h>
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

}