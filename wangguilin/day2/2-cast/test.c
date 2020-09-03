#include <stdio.h>

int main()
{
        char pa = 10;
        int qb = 20;

        char *p = &pa;
        int *q = &qb;
        printf("*p=%d\n", *p);
        printf("*q=%d\n", *q);
        printf("p=%p\n", p);
        printf("q=%p\n", q);

//      p = q;//c++ error!!!
        p = q;
        printf("*p=%d\n", *p);
        printf("*q=%d\n", *q);
        printf("p=%p\n", p);
        printf("q=%p\n", q);

        return 0;
}

