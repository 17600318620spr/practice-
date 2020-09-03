#include <iostream>
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <vector>
using namespace std;

int main()
{
        FILE *fp = fopen("aa.txt", "r+");
        if(NULL == fp)
                return -1;

        vector<string> vs;
        char buf[1024];
        while(fgets(buf, 1024, fp) != NULL)
        {
                vs.push_back(buf);
        }

        for(int i = 0; i < vs.size(); i++)
                cout << vs[i];

        fclose(fp);
        return 0;
}
