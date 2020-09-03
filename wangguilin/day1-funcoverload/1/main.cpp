#include <iostream>
#include <stdio.h>
using namespace std;

#if 0
//函数重载（静多态）
//函数名相同，参数列表不同，类型 个数 顺序
#if 0
void print(long a)
{
        cout << a << endl;
        printf("void print(long a)\n");
}
//#else
void print(double a)
{
        cout << a << endl;
        printf("void print(double a)\n");
}
#endif
int main()
{
        print(1); //int long double
        //print(3.4); //double int float

        return 0;
}
#endif

//返值类型不够成重载条件
long print(long a)
{
        printf("----");
}
double print(long a)
{
        printf("++++");
}
