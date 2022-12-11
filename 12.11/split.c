#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
char* solution(const char* s) {

    int cnt = -1;   
    int len = strlen(s);
    char *copys = strdup(s);
    char* answer = (char*)malloc(sizeof(char) * len+1 );
    int flag = 0;
    for(int i =0 ; i < len; i ++)
    {
        if(copys[i] == ' ')
        {
            flag = 1;
            cnt =-1;
        }
        else
            flag = 0;
        if (flag ==0)
            cnt++;
        if(cnt % 2 ==0)
            copys[i] = toupper(copys[i]);
        else if (cnt %2 == 1)
            copys[i] = tolower(copys[i]); 
        
    }
    answer = copys;
    return answer;
}


int main()
{
    char s1[20] = "try  hello world";
    printf("--%s--\n", solution(s1));
}
