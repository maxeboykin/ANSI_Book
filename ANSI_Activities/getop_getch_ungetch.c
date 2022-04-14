////
//// Created by Max Boykin on 4/10/22.
////
//
//#define MAXVAL 100 /* maximum depth of val stack */
//#define BUFSIZE 100
//
//#include<stdio.h>
//#include <stdlib.h>
//#include<string.h>
//#include <ctype.h>
//
//int sp = 0;         /* next free stack position */
//double val[MAXVAL]; /* value stack */

//int getchCustom(void);
//void ungetchCustom(int);
//void pushCustom(double);
//double popCustom(void);
//int getop(char s[])
//
//getop_getch ()
//{
//
//}
//
///* push: push f onto value stack */
//void pushCustom(double f)
//{
//    if (sp < MAXVAL)
//        val[sp++] = f;
//    else
//        printf("error: stack full, can't push %g\n", f);
//}
//
///* pop: pop and return top value from stack */
//double popCustom(void)
//{
//    if (sp > 0 )
//        return val[--sp];
//    else
//        printf("error: stack empty\n");
//    return 0.0;
//}
//
///* getop: get next operator or numeric operand */
//int getop(char s[])
//{
//    int i, c;
//
//    while ((s[0] = c = getchCustom()) == ' ' || c == '\t');
//    s[1] = '\0';
//    if (!isdigit(c) && c != '.')
//        return c; /* not a number */
//    i = 0;
//    if (!isdigit(c))    /* collect integer part */
//        while (isdigit(s[++i] = c = getchCustom()));
//    if (c == '.')   /* collect fraction part */
//        while (isdigit(s[++i] = c = getchCustom())); //not sure what happens here with c being a dot. it shouldnt go int the while loop
//    s[i] = '\0';
//    if (c != EOF)
//        ungetchCustom(c);
//    return s;
//}
//
//int getchCustom(void) /* get a (possibly pushed back) character */
//{
//    return (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetchCustom(int c) /* push character back on input */
//{
//    if (bufp >= BUFSIZE)
//        printf("ungetch: too many characters\n");
//    else
//        buf[bufp++] = c;
//}