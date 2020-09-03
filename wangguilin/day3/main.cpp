#include <iostream>
using namespace std;

#if 0
int main()
{
        void *p;
        int *q;
        p = q;
        q = static_cast<int *>(p);

        int *px;
        double *py;
        px = reinterpret_cast<int *>(py);
        py = reinterpret_cast<double *>(px);

        return 0;
}
#else
void func(const int &ref)
//void func(int &ref)
{
        cout << ref << endl;
}

void foo(int &ref)
{

}

const int func2()
{
        return 20;
}

int main()
{
        const int a = 200;
        func(a+200);

        foo(const_cast<int&>(a));
        //foo(const_cast<int&>(func2())); ???

        return 0;
}
#endif
//const_cast 只针对引用和指针
