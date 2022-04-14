#include <stdio.h>

#define LOWER 0  /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahreinheit-Celsius table
 * for fahr = 0, 20, ..., 300
 */


int firstProgram() {
    float fahr, celsius;
    int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;
    printf("Fahr Celsius\n");
while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
}

//int fahr;
//for(fahr = 300; fahr >= 0; fahr = fahr - 20)
//    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}
