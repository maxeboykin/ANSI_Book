//
// Created by Max Boykin on 4/19/22.
//

#ifndef ANSI_BOOK_SWITCHCASE_H
#define ANSI_BOOK_SWITCHCASE_H

#endif //ANSI_BOOK_SWITCHCASE_H


void numberOfDaysInMonth()
{
    int monthNumber;

    printf("Enter a month number 1 to 12: ");
    scanf("%d", &monthNumber);

    switch(monthNumber)
    {
        case 1: printf("31 days");
            break;
        case 2: printf("28 or 29 days");
            break;
        case 3: printf("31 days");
            break;
        case 4: printf("30 days");
            break;
        case 5: printf("31 days");
            break;
        case 6: printf("30 days");
            break;
        case 7: printf("31 days");
            break;
        case 8: printf("31 days");
            break;
        case 9: printf("30 days");
            break;
        case 10: printf("31 days");
            break;
        case 11: printf("30 days");
            break;
        case 12: printf("31 days");
            break;
        default: printf("Invalid input! Enter month number between 1 and 12");
    }
    return;
}