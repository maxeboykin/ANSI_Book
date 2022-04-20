//
// Created by Max Boykin on 4/19/22.
//

#ifndef ANSI_BOOK_POINTERS_H
#define ANSI_BOOK_POINTERS_H

#endif //ANSI_BOOK_POINTERS_H
//function declarations
void swap(int *num1, int *num2);


void callingSwap()
{
    int num1, num2;

    //Inputting 2 numbers from user
    printf("\nEnter the first number : ");
    scanf("%d", &num1);
    printf("\nEnter the Second number : ");
    scanf("%d", &num2);

    //Passing the addresses of num1 and num2
    swap(&num1, &num2);

    //Printing the swapped values of num1 and num2
    printf("\nFirst number  : %d", num1);
    printf("\nSecond number : %d", num2);
}


void swap(int *num1, int *num2)
{
//    printf("\nThe first number is %i", num1);
//    printf("\nThe second number is %i", num2);

    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

