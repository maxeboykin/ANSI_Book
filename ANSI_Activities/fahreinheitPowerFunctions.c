//
// Created by Max Boykin on 4/2/22.
//


#include <stdio.h>
int power(int m, int n);
int fahrenheitCelsiusTable(int lower, int upper, int step);
/* test power function*/

fahreinheitPowerFunctions()
{
    int i;
    fahrenheitCelsiusTable(0, 300, 20);
    for(i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

int fahrenheitCelsiusTable(int lower, int upper, int step)
{
    int fahr, celsius;
    fahr = lower;
    while(fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
