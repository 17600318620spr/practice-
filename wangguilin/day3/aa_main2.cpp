#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
        FILE *fp = fopen("aa.txt", "r+");
        if(NULL == fp)
                return -1;

        int lineCount = 0;
        char buf[1024];
        while(fgets(buf, 1024, fp) != NULL)
                lineCount++;
        rewind(fp);

        string *str = new string[lineCount];
        string *pstr = str;
        while(fgets(buf, 1024, fp) != NULL)
        {
                *pstr++ = buf;
        }

        for(int i = 0; i < lineCount; i++)
                cout << str[i];

        fclose(fp);
        return 0;
}
