#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    size_t answer = arr[0];
    size_t cnt = 0;
   
    while (cnt != arr_len)
    {
        answer++;
        cnt = 0;
        for (size_t i = 0; i < arr_len; i++)
            if (answer % arr[i] == 0)
                cnt++;   
    }
    return answer;
}
