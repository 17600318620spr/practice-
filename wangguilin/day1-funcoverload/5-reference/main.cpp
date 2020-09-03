#include <stdio.h>
using namespace std;

//1.引用是一种声明关系，声明的时候必须要初始化。引用不分配内存
//2.此种声明关系，一经声明，不可变更
//3.可对引用，再次引用。多次引用的结果，是某一变量具有多个别名
//4.&符号前有数据类型时，是引用。其他皆为取地址

int main()
{
        int a = 500; //变量名，实质是一段内存空间的别名
        //*(int *)0xb0002345 = 500;
        int &ra = a; //ra是a的引用

        printf("&a = %p &ra = %p\n", &a, &ra);
        a = 1000;
        printf("a = %d ra = %d\n", a, ra);
        a = 2000;
        printf("a = %d ra = %d\n", a, ra);

        int b = 200;
        ra = b; //赋值
        //int &ra = b; //声明 error!!!
        printf("a = %d ra = %d\n", a, ra);



        int &rr = ra;
        printf("a = %d ra = %d rr = %d\n", a, ra, rr);

        return 0;
}
