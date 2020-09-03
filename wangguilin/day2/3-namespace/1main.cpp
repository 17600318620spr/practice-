#include <iostream>
using namespace std;

//::作用域运算符 前面要有命名空间
//全局无全局无名命名空间
//局部
//namespace 是对全局命名空间的再次划分
int v = 55;
void func()
{
        cout << "void func()" << endl;
}

#if 0
int main()
{
        int *p = &v;
        int v = 5;

        cout << v << endl;
        cout << *p << endl;

        return 0;
}
#else
int main()
{
        int v = 5;

        cout << v << endl;
        cout << ::v << endl;

        ::func();

        return 0;
}
#endif
