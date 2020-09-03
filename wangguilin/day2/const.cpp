#include <iostream>
using namespace std;

void func(const int &rx)
{
        //rx = 2000;
}

int main()
{
        int a = 200;
#if 0
        const double &ra = a; //类型不同

        const int &rv = 300; //常量

        func(10 + a); //表达式
#else
        int &ra = a;
        const double &rb = a;

        a= 400;
        cout << "a=" << a << endl;
        cout << "ra=" << ra << endl;
        cout << "rb=" << rb << endl;

        cout << "&a=" << &a << endl;
        cout << "&ra=" << &ra << endl;
        cout << "&rb=" << &rb << endl;
#endif
        return 0;
}
