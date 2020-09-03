#include <iostream>
#include <stdlib.h>
using namespace std;

#if 0
static_cast      //对于隐式类型可以转化的，即可用此类型
reinterpret_cast //对于无隐式类型的转化，static_cast已不可用
const_cast       //脱常
dynamic_cast //多态中的父子类之间的强制转化，以后再讲
#endif

#if 0
int main()
{
        float a = 5.6;
        int b = 5;
        b = static_cast<int>(a);
        a = static_cast<float>(b);

        void *p;
        int *q;
        //p = q;
//        q = p;//error!!!
        q = static_cast<int *>(p);

        int x = 10;
        int y = 3;
        //float z = x/y; //z = 3
        float z = static_cast<float>(x)/y;
        float s = y;
        cout << z << endl;
        cout << s << endl;

        char *pc = static_cast<char *>(malloc(100));

        return 0;
}
#endif

#if 0
int main()
{
/*
        char *p;
        int *q;
//        p = q;//error!!!
        p = reinterpret_cast<char *>(q);
*/
        int a[5] = {1,2,3,4,5};
        //int *p = (int *)(int(a) + 1); //reinterpret_cast<int*>((reinterpret_cast<int>(a)+1));
        int *p = reinterpret_cast<int*>((reinterpret_cast<int>(a)+1));
        cout << hex << *p << endl;

        return 0;
}
#else
int main()
{//???
        char pa = 10;
        int qb = 20;

        char *p = &pa;
        int *q = &qb;
//        p = q;//error!!!
        p = reinterpret_cast<char *>(q);
        cout << *p << endl;
        cout << *q << endl;
        cout << "p=" << p << endl;
        cout << "q=" << q << endl;

        return 0;
}
#endif
