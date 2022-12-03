#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
   
    int* answer = (int*)malloc(sizeof(int) * 2);
    
    
    int win = 0;
    int cnt = 0; 
    int rank =0;
    for(int i = 0; i < lottos_len; i++)
    { 
        if (lottos[i] == 0)  
            cnt++;
        else
        {
            for(int j = 0; j < win_nums_len; j++)// 일치하는 숫자의 개수를 센다
                {
                    if (lottos[i] == win_nums[j])
                     { 
                         win++; 
                         break;
                      }
                  }
             }        
    }
    // 등수 계산
    if(win == 0 && cnt == 0 )
        win=1;
    answer[0] = (7 - (win + cnt) == 0)? 6 : 7-(win + cnt);
    answer[1] = (7 - win == 7)? 6 : 7-win ;
    return answer;
}