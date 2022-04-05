

#include <stdio.h>


main()
{

}

/* atoi: convert s to integer
 * The atoi() function in C takes a string (which represents an integer)
 * as an argument and returns its value of type int. So basically the
 * function is used to convert a string argument to an integer.
 */
int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower: convert c to lower case
 */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
