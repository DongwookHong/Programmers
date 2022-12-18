#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int temp=0;
    if (a>b)
    {
        temp =a;
        a = b;
        b= temp;
    }
    for(a; a<=b; a++)
        answer +=a; 
    return answer;
}