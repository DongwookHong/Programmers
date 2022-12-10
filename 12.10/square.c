#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long long solution(long long n) {
    long long answer = -1;
    for(long long i =1 ; i*i <= n;i++)   
        if(n == pow(i,2))
            answer = pow(i+1,2);
    return answer;
}