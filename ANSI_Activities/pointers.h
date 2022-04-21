//
// Created by Max Boykin on 4/19/22.
//

#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size

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


void createPrintArrayElementsPointer()
{
    int arr[MAX_SIZE];
    int num, i;
    int * ptr = arr; // pointer to arr[0]

    printf("Enter size of array:\n");
    scanf("%d", &num);

    printf("Enter elements in array:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", ptr);//moving pointer to next array element
        ptr++;
    }
    ptr = arr;
    printf("Entered array elements are: ");
    for (i = 0; i < num; i++)
    {
        //print value pointed by the pointer
        printf("%d", *ptr);
        //move pointer to next array element
        ptr++;
    }
    return;
}


void simpleChangeValueWithPointer()
{
    const int a = 20; //declare and assign constant integer
    int *p; //declare integer pointer
    p = &a; //assign address into pointer p

    printf("Before changing - value of a: %d", a);

    //assign value using pointer
    *p = 40;
    printf("\nAfter changing - value of a: %d", a);
    printf("\nValue has changed.");

    return;
}

void printArrayWithAddresses()
{
    int arr[10];
    int *ptr;
    int i;

    ptr=&arr[0];

    printf("Enter array elements:\n");
    for(i=0;i<5;i++){
        scanf("%d", ptr+i); //reading through pointer
    }

    printf("\nEntered array elements are:");
    printf("\nAddress\t\tPointer\t\t\tValue\n");
    for(i=0;i<5;i++){
        printf("%08X\t%p\t%03d\n", (ptr+i),(ptr+i), *(ptr+i));
    }
    return;
}