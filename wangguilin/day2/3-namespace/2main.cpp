#include <iostream>
using namespace std;

namespace Space
{
        int x;
        int y;
}

namespace Other
{
        int x;
        int y;
}

int main()
{
#if 1
        Space::x = 200;
        cout << Space::x << endl;
        Space::y = 300;
        cout << Space::y << endl;
#else
        using Space::x;
        x = 30;
        cout << x << endl;
#endif
        using namespace Space;
        x = 10;
        y = 20;
        cout << x << endl;
        cout << y << endl;

        int x;
        int y;

        return 0;
}
