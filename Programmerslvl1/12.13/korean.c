#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char a[] = "수";
    char b[] = "박";
    
    char* answer = (char*)malloc(n*3 + 1); // utf-8 (유니코드 인코딩)에는 한글 형 3byte 
    for(int i=0; i<n*3; i+=3)
    {
        if((i+2)%2==0) 
        {
            answer[i] = a[0];
            answer[i+1] = a[1];
            answer[i+2] = a[2];
        }
        else 
        {
            answer[i] = b[0];
            answer[i+1] = b[1];
            answer[i+2] = b[2];
        }
        
    }
    answer[n*3] = '\0';
    return answer;
}