#include <iostream>
#include <time.h>
using namespace std;

void weatherCast(string w = "pm2.5")
{
        time_t t = time(0); //1970,0,0,0
        char tmp[64];
        strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A\t", localtime(&t));
        cout << tmp << "today is weather " << w << endl;
}

//从右向左默认，中间不能跳跃
int volume(int l, int w = 4, int h = 5)
{
        return l*w*h;
}

int main()
{
#if 0
        weatherCast();
        weatherCast("sunny");
        weatherCast();
        weatherCast();
        weatherCast("windy");
        weatherCast();
        weatherCast();
#else
        cout << volume(3) << endl;
        cout << volume(1, 2) << endl;
        cout << volume(1, 2, 10) << endl;
#endif
        return 0;
}
