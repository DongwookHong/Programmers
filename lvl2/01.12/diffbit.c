#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long check_base (long long num)
{
    long long temp=0;
    
    for(long long i = 1; pow(2,i) <= num; i++)
	{
        if(num % (long long)pow(2,i) == 0)
            temp = i;
    }
    return pow(2,temp-1);    
}

long long* solution(long long numbers[], size_t numbers_len) {
   
    long long* answer = (long long*)malloc(sizeof(long long) * numbers_len);
    for(long long i =0; i < numbers_len; i ++)
    {
        long long cnt;
        if(numbers[i] % 4 != 3)
            answer[i] = numbers[i]+1;
        else
        {
            cnt = check_base(numbers[i]+1);
            answer[i] = numbers[i] + cnt;
        }
    }
    return answer;
}



