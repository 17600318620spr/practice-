#include <iostream>
using namespace std;

//c++认为一切操作符都是函数，函数是可以重载的（并不是所有运算符都可以重载）
struct Complex
{
        float real;
        float image;
};

Complex operator+(Complex a, Complex b)
{
        Complex c;
        c.real = a.real + b.real;
        c.image = a.image + b.image;
        return c;
}

int main()
{
        int a, b;
        int c = a + b;

        Complex aa = {1, 2}, bb = {2, 3};
        //Complex cc = aa + bb;
        Complex cc = operator+(aa, bb);
        cout << "cc= " << "(" << cc.real << "," << cc.image << ")" << endl;

        return 0;
}
