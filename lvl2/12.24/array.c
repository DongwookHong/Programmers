#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (right-left+1));
   
    int k=0;
    for(long long i = left ; i<=right; i++)
        answer[k++] = (i%n > i/n)? i%n+1: i/n+1;
 
    return answer;
}