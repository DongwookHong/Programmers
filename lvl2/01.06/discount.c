#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// want_len은 배열 want의 길이입니다.
// number_len은 배열 number의 길이입니다.
// discount_len은 배열 discount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int change_str(char * abc)
{
    
    int sum =0;
    for(int i = 0; i < 2; i ++)
    {
        sum += abc[i];
        sum -= 95;
    }
    return sum;
}
int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) 
{
    int answer = 0;
    int want_num[100] ={0,};
    for(int i =0 ; want[i]; i++)
        want_num[change_str(want[i])]++;
    
    return answer;
}
