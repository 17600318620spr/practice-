#include <iostream>
using namespace std;

class Test
{
public:
        Test()
        {
                cout<<"Create Test Object:"<<this<<endl;
                data = 0;
                cout<<"data="<<data<<endl;
        }
        Test(int d)
        {
                cout<<"---------"<<endl;
                cout<<"Create Test Object:"<<this<<endl;
                data = d;
                cout<<"data="<<data<<endl;
        }
        Test(int x, int y);
        Test(int d, int x, int y)
        {
                cout<<"+++++++++"<<endl;
                cout<<"Create Test Object:"<<this<<endl;
                data = d;
                this->x = x;
                this->y = y;
                cout<<"data="<<data<<endl;
                cout<<x<<endl;
                cout<<y<<endl;
        }
        ~Test()
        {
                cout<<"Free Test Object:"<<this<<endl;
        }
private:
        int data;
        int x;
        int y;
};

//返回值 类名::函数名(参数列表)
Test::Test(int x, int y)
{
        this->x = x;
        this->y = y;
        cout<<"^^^^^^^^"<<endl;
        cout<<"Create Test Object:"<<this<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
}

int main()
{
#if 0
        Test t;
        Test t1;
        Test t2;
        Test t3[5];
#else
        //Test t1();//error!!!
        Test t1;
        //cout<<data<<endl;

        Test t2(10);
        //cout<<data<<endl;

        Test t3(1,2,3);
        //cout<<data<<endl;

        Test t4(15, 25);
#endif
        return 0;
}
