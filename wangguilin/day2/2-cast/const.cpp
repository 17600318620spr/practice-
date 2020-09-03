#include <iostream>
using namespace std;

void func(const int &v)//const 对引用的一种扩展
{
        //v = 100;
}
void func2(int &v)
{
        cout << v << endl;
}

int main()
{
        //const 一定不可以改
        //const_cast 只能应用于指针引用
        const int a = 19;

        func(a + 10);
        func2(const_cast<int&>(a));

        int &ra = const_cast<int&>(a);
        ra = 200;
        cout << "a=" << a << endl;
        cout << "ra=" << ra << endl;
        cout << "&a =" << &a << endl;
        cout << "&ra=" << &ra << endl;

cout << "-------------" << endl;
        int *pi = const_cast<int*>(&a);
        *pi = 300;
        cout << "a=" << a << endl;
        cout << "*pi=" << *pi << endl;
        cout << "&a=" << &a << endl;
        cout << "pi=" << pi << endl;

cout << "-------------" << endl;
        struct A
        {
                int data;
        };
        const A ad = {10};
        A *pA = const_cast<A*>(&ad);
        cout << "ad.data=" << ad.data << endl;
        pA->data = 200;
        cout << "pA->data=" << pA->data << endl;

        return 0;
}
