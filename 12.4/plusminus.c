#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
// int sign( int c, bool a)
// {
//     if(a == false)
//          c *= -1;
//     //printf("인자 값은 ? %d  \n ",c);
//     return c;
// }

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    
    for(int i =0; i < absolutes_len; i++)
    {
        if(signs[i])
            answer +=absolutes[i];
        else
            answer -= absolutes[i];
        // absolutes[i] = sign(absolutes[i],signs[i]);
        // answer += absolutes[i];    
    }
    return answer;
}