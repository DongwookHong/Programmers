#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// elements_len은 배열 elements의 길이입니다.
int solution(int elements[], size_t elements_len) {
    size_t max =0; 
    int answer = 0;
 
    for(int i =0; i < elements_len; i++)
        max += elements[i];
    
    int *arr = calloc(max+1,sizeof(int));
    
    for(int i = 1 ; i <= elements_len; i ++)
    {
        for(int j =0; j < elements_len; j++)
        {
           int sum =0;
            for(int k =0; k < i; k++)
                sum += elements[(k+j)%elements_len] ;
            arr[sum]++;
        }
    }
    for(int i =0; i <=max; i ++)
    {
       if(arr[i] >0)
           answer++;
    }
 
    return answer;
}
