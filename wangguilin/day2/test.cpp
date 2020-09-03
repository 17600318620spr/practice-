#include <iostream>
//#include <stdio.h>
using namespace std;

#if 0
int main(int argc, char *argv[])
{
        char *p;
        int *q;

        //p = q;
        
        return 0;
}
#endif

int main()
{
#if 0
        int a;
        char b;
        cin>>a>>b;        //cin>>a; cin>>b;
        cout<<a<<b<<endl; //cout<<a; cout<<b; cout<<endl;
#else
        string str = "china";
        cout << str << endl;
        str = "China";
        cout << str << endl;

        cin >> str;
        cout << str << endl;
#endif
}
