#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    int num[2000] ={0,}; 
    num[0]=0;
    num[1]=1;
    num[2]=2;
    
    for(int i = 3; i <= n; i++)
        num[i] = (num[i - 2] + num[i - 1]) % 1234567;
    return num[n];
}
