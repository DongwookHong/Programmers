#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.


 int cmp(const void *A, const void *B)
 {
     int *a = (int *)A;
     int *b = (int *)B;

     if(*b > *a)
         return -1;
     return 1;
 }


int solution(int A[], size_t A_len, int B[], size_t B_len) {
    qsort(A,A_len,sizeof(int), cmp);
    qsort(B,B_len,sizeof(int), cmp);
  
    int cnt =0;
    for(int i =0; i< A_len;i++)
        cnt += A[i]*B[B_len-i-1];
    return cnt;
}
