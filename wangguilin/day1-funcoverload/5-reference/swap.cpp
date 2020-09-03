#include <iostream>
using namespace std;

#if 0
void swap(int *pa, int *pb)
{
        *pa ^= *pb;
        *pb ^= *pa;
        *pa ^= *pb;
}
#else
void swap(int &ra, int &rb)
{
        ra ^= rb;
        rb ^= ra;
        ra ^= rb;
}
#endif

int main()
{
        int a = 5;
        int b = 3;

        swap(a, b);
        cout << "a=" << a << " b=" << b << endl;

        return 0;
}
