//
// Created by Max Boykin on 3/31/22.
//

/*
 * copy input to output
 */

#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF) { //precedence of != is greater than =, so use braces
        putchar(c);
    }
    printf("%d - at EOF\n", c);
}
