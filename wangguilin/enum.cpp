#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

enum BOOL
{
        FALSE,TRUE
};
#if 0
//#define Spr 0
//#define Sum 1
enum SEASON
{
        Spr,Sum,Autu,Win
};

int main(int argc, char *argv[])
{
#if 0
        const int a = 100;
        //a = 200;
        const int *p = &a;

        char *q = (char *)malloc(100);

        BOOL b = FALSE;
        if(!b)
        {
                printf("b value is false\n");
        }

        bool bb;
        printf("sizeof(bb)=%ld sizeof(bool)=%ld\n", sizeof(bb), sizeof(bool));
#endif

        SEASON s;
        s = Spr;
        s = 100;//error!!!

        return 0;
}
#endif
int main(int argc, char *argv[])
{
//        char name[30];
//        scanf("%s", name);
//        gets(name);
//        fgets(name, 30, stdin);
//        cin>>name;// >>流输入运算符
  
        string name;
        cin>>name;
        cout<<name.max_size()<<endl;

        cout<<"name=";
        cout<<name;
        cout<<endl;
        return 0;
}
