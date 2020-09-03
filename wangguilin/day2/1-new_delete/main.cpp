#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//malloc free  #include <stdlib.h> 库函数
//new delete  keywords 关键字  int for

//单变量空间
//数组

struct Stu
{
        int age;
        string name;
};

#if 0
int main()
{
//        int *p = static_cast<int *>(malloc(sizeof(int)));
        int *p = new int(200); //(单变量)
        cout << *p << endl;

        string *ps = new string("spr"); //*ps = "spr";(单变量)
        cout << *ps << endl;

        Stu *pStu = new Stu{10, "hgl"};
        cout << pStu->age << endl;
        cout << pStu->name << endl;

        return 0;
}
#else
int main()
{
        char *p = new char[40];
        strcpy(p, "china");
        cout << p << endl;

        int *pi = new int[5]; //new int[5]{0};
        memset(pi, 0, sizeof(int[5]));
        for(int i = 0; i < 5; i++)
        {
                cout << pi[i] << endl;
        }

        char **ppc = new char *[5]{NULL};
        ppc[0] = "china";
        ppc[1] = "automan";
        ppc[2] = "greatwall";
        while(*ppc)
        {
                //cout << *ppc++ << endl;
                cout << ppc[0] << endl;
                cout << *ppc << endl;
                ppc++;
        }

        int (*pa)[4] = new int[3][4]{{0}};
        //for(int i = 0; i < sizeof(int[3][4])/sizeof(int[4]); i++)
        for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 4; j++)
                {
                        cout << pa[i][j] << " ";
                }
                cout << endl;
        }

        int (*px)[3][4][5] = new int[2][3][4][5];
}
#endif


#if 0
int main()
{
        int *p = new int;
        delete p;

        int *q = new int[100];
        delete []q;
}
#endif
