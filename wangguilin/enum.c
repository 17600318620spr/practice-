#include <stdio.h>

enum DAY
{
        Mon,Tue,Wed
};

int main(int argc, char *argv[])
{
#if 0
        const int a;
//        const int a = 10;
        //a = 100;

        int *p = &a;
//        *p = 100;
        printf("a = %d\n", a);
#endif
        enum DAY today;
        today = 100;
        //today = Mon;

        return 0;
}
