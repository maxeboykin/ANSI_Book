
#include<stdio.h>
#include<string.h>

void itoa(int n, char[]);
int trim(char s[]);
itoaAndTrim()
{
    char str[50];
    itoa(13442323, str);
    printf("%s\n", str);

    char statement[50] = "I am a frog   ";
    int size = trim(statement);
    printf("%s\n", statement);
    printf("%i\n", size);
}

/*itoa: convert n to characters in s */
void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0) /* record sign */
        n = -n; /*make n positive */
    i = 0;
    do {        /* generate digits in reverse order */
        s[i++] = n % 10 + '0';      /*get next digit */
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    //reverse(s);
}

/*trim : remove trailing blanks, tabs, newlines */
int trim(char s[])
{
    int n;

    for (n = strlen(s)-1; n >= 0; n--)
        if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n+1] = '\0';
    return n;
}//
// Created by Max Boykin on 4/9/22.
//

