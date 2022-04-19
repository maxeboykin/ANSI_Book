//
// Created by Max Boykin on 4/19/22.
//
#include <stdio.h>
#ifndef ANSI_BOOK_LOOPPROGRAMS_H
#define ANSI_BOOK_LOOPPROGRAMS_H

#endif //ANSI_BOOK_LOOPPROGRAMS_H

void printASCIICharacters()
{
    int i;
    for(i = 0; i <= 255; i++)
    {
        printf("ASCII value of %c = %d\n", i, i);
    }
    return;
}

int calculatePower()
{
    int base, exponent, power, i;
    //reading base and exponent
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    power = 1;
    i = 1;

    while(i <= *&exponent)
    {
        power = base*power;
        i++;
    }
    printf("Power : %d", power);
    return base;
}

int calculateDigitsOfANumber()
{
    int n, product = 1;

    //reading a number from a user

    printf("Enter any number: ");
    scanf("%d", &n);

    //repeat the steps till n becomes 0
    while (n!= 0)
    {
        product = product * (n % 10);
        //n%10 takes off the last digit of the number
        n = n / 10;
    }

    printf("Product of digits = %1d\n", product);
    return product;
}