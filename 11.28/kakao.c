#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len)
{
    char arr[] = {'R','C','J','A'};
    char * answer = (char *)malloc(5);
    int cnt[5] = {0,};

    for(int i = 0; i < survey_len; i++)
    {
        for(int j =0; j <4 ; j++)
        {
            if(survey[i][0] == arr[j])
            {
                cnt[j] += 4 - choices[i];
                break;
            }
            else if(survey[i][1] == arr[j])
            {
                cnt[j] += choices[i] -4;
                break;
            }
        }
    }
    if(cnt[0] >= 0)
            answer[0] = 'R';
    else 
            answer[0] = 'T';
    
    if(cnt[1] >= 0)
            answer[1] = 'C';
    else 
            answer[1] = 'F';
        
    if(cnt[2] >= 0)
            answer[2] = 'J';
    else 
            answer[2] = 'M';
     if(cnt[3] >= 0)
            answer[3] = 'A';
    else 
            answer[3] = 'N';
    answer[4] = '\0';

    

    return answer ;  
}

int main(){
   // char    arr[][3] ={{"RT"},{"TR"},{"FC"},{"CF"},{"MJ"},{"JM"},{"AN"},{"NA"}};
    const char *arr [4] = {"TR", "RT", "TR"};
    int sore[] = {7,1,3};

    printf("%s", solution(arr,3,sore,3));
}