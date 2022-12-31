#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 int cmp(const void  *A, const void *B)
 {
     int *a  =(int*)A;
     int *b  =(int*)B;
     
     if( *b <*a)
         return 0;
     return 1;
 }

// tangerine_len은 배열 tangerine의 길이입니다.
int solution(int k, int tangerine[], size_t tangerine_len) {
    int answer = 0;
    int max =0;
    for(int i =0; i < tangerine_len; i++)
        if(tangerine[i]>max)
            max = tangerine[i];
    printf("%d",max);
    int *arr = (int *)calloc(max+1,sizeof(int));
    
   for(int i =0; i  < tangerine_len; i++)
       arr[tangerine[i]]++;
   
    qsort(arr,max+1,sizeof(int),cmp);
   
   int tan =0;
   
   while(k >0)
   {
      k-= arr[tan];
        answer++;
        tan++;
    } 
    return answer;
}
