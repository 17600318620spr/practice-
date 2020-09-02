#include <iostream>
using namespace std;

namespace my_space
{
        void func()
        {
                cout<<"this is func1"<<endl;
        }
}
namespace you_space
{
        void func()
        {
                cout<<"this is func2"<<endl;
        }
}
using namespace you_space;

int main(int argc, char *argv[])
{
        func();
#if 0
        char ch = 'B';
        int i = 10;

        cout<<"hello world"<<endl;
        cout<<ch<<endl;
        cout<<i<<endl;

        for(i = 0; i < 10; i++)
        {
                cout<<"i= "<<i<<endl;
        }
#endif

        return 0;
}
