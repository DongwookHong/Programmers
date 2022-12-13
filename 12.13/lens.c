#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    char *num = "0123456789";
    char *copy_s = strdup(s);
    int len=0;
    while(s[len])
        len++;
    int i =0;
    if(!(len==4 || len ==6))
        return !answer;
    
    while(copy_s[i] && strchr(num,copy_s[i])) 
        i++;
    return (i ==len)? answer : !answer;
}


int main ()
{
    char *abc = "1234";

    printf("%d",solution(abc));
}