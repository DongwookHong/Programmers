#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap_index(int *a, int *b)
{
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_me(int *str, int n)
{
    for(int i = 0; i < n ; i ++)
        for (int j =0; j< n -i -1; j ++)
            if(str[j] > str[j+1])
                 swap_index(&str[j],&str[j+1]);

}
    
    

int* solution(int k, int score[], size_t score_len) {
    
    int *answer = (int*)malloc(sizeof(int)*score_len);
   
    for(int i=0; i<score_len;i++ )
    {
        if(i<k)
        {      
              sort_me(score,i+1);
              answer[i]=score[0];
        }
        else
        {
            if(score[0] < score[i])
            {
                swap_index(&score[0],&score[i]);
                sort_me(score,k);
                answer[i] = score[0];
            }
            else
                answer[i] = score[0];
        }
    }
    return answer;
}
