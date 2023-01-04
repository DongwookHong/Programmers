#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int *chage_num(char *str)
{
    int *change;
    change = (int *)malloc(sizeof(int) * 5);
     for(int i = 0 ; i < strlen(str); i++)
    {
        if (str[i] == 'A')
            change[i] =0;
        else if (str[i] == 'E') 
            change[i]  = 1;
        else if (str[i] == 'I') 
            change[i]  = 2;
       else if (str[i] == 'O') 
            change[i] = 3;
        else if (str[i] == 'U') 
            change[i] = 4;
    }
    return change;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* word) {
    
    int answer = 0;
    char *copy_s = strdup(word);
    int *copy = chage_num(copy_s);
    int len = strlen(word);
    
    answer = copy[0] * 781 +1;
    if(len == 1 )
        return answer;
    answer += copy[1] * 156 +1;
    if(len ==2)
        return answer;
    answer += copy[2] * 31 +1;
    if(len  == 3)
        return answer;
    answer += copy[3] * 6 +1;
    if(len == 4)
        return answer;
    answer += copy[4] * 1 +1;
    return answer;
}
