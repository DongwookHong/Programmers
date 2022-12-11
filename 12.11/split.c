#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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
