#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.



int solution(const char* s) {
    char num[10][6] = { "zero", "one", "two", "three","four", "five", "six" , "seven","eight","nine"};
    char answer[22] = {0,};
    char *cpy;

    cpy = strdup(s);
    int len = strlen(cpy);
    int k=0;
    
    for(int i =0; i < len; i++)
    {
        if(cpy[i]>= '0' && cpy[i] <= '9')
            answer[k++] = cpy[i];

        for(int j = 0;  j < 10; j++)
        {
            if (!strncmp(&cpy[i], num[j],strlen(num[j])))
            {
                answer[k++] = j + '0';
                break;
                // i +=strlen(num[j]);
            }
        }
    }
 
int a;

 a = atoi(answer);
    return a;
}
