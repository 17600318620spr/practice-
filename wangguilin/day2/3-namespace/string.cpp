#include <iostream>
using namespace std;

int main()
{
        string s = "china";;
        string s2 = "xxxx";
#if 0
        cout << s << s2 << endl;
        s.swap(s2);
        cout << s << s2 << endl;
#endif
        int n = s.find('i', 0);
        cout << "n= " << n << endl;

        return 0;
}
