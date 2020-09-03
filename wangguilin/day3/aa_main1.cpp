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

        char **p = (char **)malloc((lineCount+1)*sizeof(char *));
        char **pt = p;
        while(fgets(buf, 1024, fp) != NULL)
        {
                int len = strlen(buf);
                *pt = (char *)malloc(len + 1);
                strcpy(*pt, buf);
                pt++;
        }
        *pt = NULL;

        while(*p)
        {
                printf("%s", *p++);
        }

        fclose(fp);
        return 0;
}
